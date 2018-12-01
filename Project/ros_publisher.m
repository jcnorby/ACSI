if robotics.ros.internal.Global.isNodeActive == 0 % if node not active
    rosinit
end

clc
clear
% try
% Create publisher for the '/chatter' topic with the 'std_msgs/String' message type.
traj_pub = rospublisher('/traj','geometry_msgs/PoseStamped');

% Create a message to send. Specify the Data property.
traj_msg = rosmessage(traj_pub);

% load('angledTraj.mat')
N = 151;
dt = 0.02;

hoop_pos = [0;0;1];
quad_pos = [0;0;0];
quad_orientation = [0;0;0];

xf = [0;2;1;0;0;0
    0;0;0;0;0;0];

hoop_sub = rossubscriber('/hoop_traj_calc','geometry_msgs/PoseStamped');
cf_sub = rossubscriber('/crazyflie/optitrack/rigid_bodies','optitrack/RigidBodyArray');
pause(1);

cf_cmd_hist = [];
cf_actual_hist = [];

while(1)
    msg_hoop = receive(hoop_sub,180);
    secs = msg_hoop.Header.Stamp.Sec;
    nsecs = msg_hoop.Header.Stamp.Nsec;
    
    curTime = rostime('now');
    
    t = (curTime.Sec + curTime.Nsec / 1e9) - (secs + nsecs/1e9);
    
    hoop_pos_old = hoop_pos;
    hoop_vel_old = hoop_vel;
    hoop_pos = [msg_hoop.pose.position.x; msg_hoop.pose.position.y; msg_hoop.pose.position.z];
    
    hoop_vel = 31.61*hoop_pos - 31.61*hoop_pos_old + 0.3679*hoop_vel_old;
    
    quad_pos_old = quad_pos;
    quad_vel_old = quad_vel;
    quad_pos = [msg_cf.bodies(0).Pose.Position.X; msg_cf.bodies(0).Pose.Position.Y; msg_cf.bodies(0).Pose.Position.Z];
    
    quad_vel = 31.61*quad_pos - 31.61*quad_pos_old + 0.3679*quad_vel_old;
    
    quad_orientation_old = quad_orientation;
    quad_velorientation_old = quad_velorientation;
    quad_orientation_quat = [msg_cf.bodies(0).Pose.Orientation.W;msg_cf.bodies(0).Pose.Orientation.X; msg_cf.bodies(0).Pose.Orientation.Y; msg_cf.bodies(0).Pose.Orientation.Z];
    quad_orientation = quat2eul(quad_orientation_quat);
    
    quad_velorientation = 31.61*quad_orientation - 31.61*quad_orientation_old + 0.3679*quad_velorientation_old;

    [x,K,u, t_wp, x_wp] = computeSLQTrajHoop_mex(N,dt,quad_pos,xf,hoop_pos, hoop_vel, [0;0;0], flag);
    
    
    index = floor(t/dt)+1;
    
    if index > N
        index = N;
    elseif index<1
        index = 1;
    end
        
    traj_msg.Pose.Position.X = x(1,index);
    traj_msg.Pose.Position.Y = x(2,index);
    traj_msg.Pose.Position.Z = x(3,index);
    
    cf_cmd_hist = [cf_cmd_hist; t, x(1,index), x(2,index), x(3,index)];
    
    quat = eul2quat([x(4,index) x(5,index) x(6,index)]);
    
    traj_msg.Pose.Orientation.W = quat(1);
    traj_msg.Pose.Orientation.X = quat(2);
    traj_msg.Pose.Orientation.Y = quat(3);
    traj_msg.Pose.Orientation.Z = quat(4);
    
    % Send message via the publisher.
    send(traj_pub,traj_msg);
    
    msg_cf = receive(cf_sub, 180);
    cf_actual_hist = [cf_actual_hist; msg_cf.Header.Stamp.Sec + msg_cf.Header.Stamp.Nsec / 1e9, ... 
        msg_cf.bodies(0).Pose.Position.X, msg_cf.bodies(0).Pose.Position.Y, msg_cf.bodies(0).Pose.Position.Z];  
end
save('cf_cmd_hist.mat', cf_cmd_hist)
% Shutdown ROS network.
% catch
%     rosshutdown
% end