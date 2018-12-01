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

load('angledTraj.mat')
N = length(x);
dt = 0.01;

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