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
hoop_vel = [0;0;0];
quad_pos = [0;0;0];
quad_vel = [0;0;0];
quad_orientation = [0;0;0];
quad_velorientation = [0;0;0];

x_start = [1.0;0;1;0;0;0
    0;0;0;0;0;0];
% x_start = repmat(x_start, 1,11);
x_end = [-0.175;2;2;0;0;0
    0;0;0;0;0;0];
xf = x_start;
x = x_start;
hoop_sub = rossubscriber('/hoop_traj_calc','geometry_msgs/PoseStamped');
cf_sub = rossubscriber('/crazyflie/optitrack/rigid_bodies','optitrack/RigidBodyArray');
launch_sub = rossubscriber('/manual_launch','std_msgs/Bool');
pause(1);

cf_cmd_hist = [];
cf_actual_hist = []; 
launch_flag = false;
compute_traj_flag = true;

while(1)
    msg_hoop = receive(hoop_sub,180); % TODO: obtain state directly from rigid bodies topic
    msg_launch = receive(launch_sub,180);    

    msg_cf = receive(cf_sub, 180);
    cf_actual_hist = [cf_actual_hist; msg_cf.Header.Stamp.Sec + msg_cf.Header.Stamp.Nsec / 1e9, ... 
        msg_cf.Bodies(1).Pose.Position.X, msg_cf.Bodies(1).Pose.Position.Y, msg_cf.Bodies(1).Pose.Position.Z]; 
    
    if ~msg_launch.Data
        launchTime = rostime('now');  
    elseif msg_launch.Data && ~launch_flag
        launchTime = rostime('now');  
        launch_flag = true;
        xf = x_end;
    end
    secs = launchTime.Sec; % this is for when msg_launch is active
    nsecs = launchTime.Nsec;    
    curTime = rostime('now');
    t = (curTime.Sec + curTime.Nsec / 1e9) - (secs + nsecs/1e9);

    %     secs = msg_hoop.Header.Stamp.Sec; % this is when msg_hoop is active
%     nsecs = msg_hoop.Header.Stamp.Nsec;
%     t = (curTime.Sec + curTime.Nsec / 1e9) - (secs + nsecs/1e9);
%     
%     secs = launchTime.Sec; % this is for when msg_launch is active
%     nsecs = launchTime.Nsec;
%     t = (curTime.Sec + curTime.Nsec / 1e9) - (secs + nsecs/1e9);
    
    hoop_pos_old = hoop_pos;
    hoop_vel_old = hoop_vel;
    hoop_pos = [msg_hoop.Pose.Position.X; msg_hoop.Pose.Position.Y; msg_hoop.Pose.Position.Z];
    
    hoop_vel = 31.61*hoop_pos - 31.61*hoop_pos_old + 0.3679*hoop_vel_old;
    
    quad_pos_old = quad_pos;
    quad_vel_old = quad_vel;
    quad_pos = [msg_cf.Bodies(1).Pose.Position.X; msg_cf.Bodies(1).Pose.Position.Y; msg_cf.Bodies(1).Pose.Position.Z];
    
    quad_vel = 31.61*quad_pos - 31.61*quad_pos_old + 0.3679*quad_vel_old;
    
    quad_orientation_old = quad_orientation;
    quad_velorientation_old = quad_velorientation;
    quad_orientation_quat = [msg_cf.Bodies(1).Pose.Orientation.W;
                                msg_cf.Bodies(1).Pose.Orientation.X; 
                                msg_cf.Bodies(1).Pose.Orientation.Y; 
                                msg_cf.Bodies(1).Pose.Orientation.Z]';
    quad_orientation = flipud(quat2eul(quad_orientation_quat)');
    
    quad_velorientation = 31.61*quad_orientation - 31.61*quad_orientation_old + 0.3679*quad_velorientation_old;

%     [x,K,u, t_wp, x_wp] = computeSLQTrajHoop_mex(t, N,dt,quad_pos,xf,hoop_pos, hoop_vel, [0;0;0], flag);
    
    x0 = [quad_pos;quad_orientation;quad_vel;quad_velorientation];
    if compute_traj_flag && launch_flag
%         [x,K,u, t_wp, x_wp] = computeSLQTrajHoop_mex(t,N,dt,x0,xf,hoop_pos, hoop_vel, [0;0;0], launch_flag);
        [x,K,u, t_wp, x_wp] = computeSLQTrajHoop_mex(t,N,dt,x0,xf,hoop_pos, [0;0;0], [0;0;0], launch_flag);
        compute_traj_flag = false;
    end
    
    if launch_flag
        index = floor(t/dt)+11;
    else
        index = floor(t/dt)+1;
    end
    
    if index > N
        index = N;
    elseif index<1
        index = 1;
    end
    
    index
    traj_msg.Pose.Position.X = x(1,index);
    traj_msg.Pose.Position.Y = x(2,index);
    traj_msg.Pose.Position.Z = x(3,index);
    
    cf_cmd_hist = [cf_cmd_hist; t, x(1,index), x(2,index), x(3,index)];
    
    quat = eul2quat([x(6,index) x(5,index) x(4,index)]);
    
    traj_msg.Pose.Orientation.W = quat(1);
    traj_msg.Pose.Orientation.X = quat(2);
    traj_msg.Pose.Orientation.Y = quat(3);
    traj_msg.Pose.Orientation.Z = quat(4);
    
    % Send message via the publisher.
    send(traj_pub,traj_msg);
    
 
end
save('cf_cmd_hist.mat', cf_cmd_hist)
% Shutdown ROS network.
% catch
%     rosshutdown
% end