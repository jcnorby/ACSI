rosinit

% try
% Create publisher for the '/chatter' topic with the 'std_msgs/String' message type.
traj_pub = rospublisher('/traj','geometry_msgs/PoseStamped');

% Create a message to send.
traj_msg = rosmessage(traj_pub);

load('angledTraj.mat')
N = length(x);
dt = 0.01;
hoop_pos = [0;0;1];

hoop_sub = rossubscriber('/hoop_traj_calc','geometry_msgs/PoseStamped');
pause(1);

while(1)
    msg_hoop = receive(hoop_sub,10);
    secs = msg_hoop.header.secs;
    nsecs = msg_hoop.header.nsecs;
    
    old_hoop_pos = hoop_pos;
    old_hoop_vel = hoop_vel;
    hoop_pos = [msg_hoop.pose.position.x; msg_hoop.pose.position.y; msg_hoop.pose.position.z];
    
    hoop_vel = 31.61*hoop_pos - 31.61*hoop_pos_old + 0.3679*old_hoop_vel;
    
    t = rostime('now') - (secs + 1e9*nsecs);
    
    index = floor(t/dt)+1;
    
    if index > N
        index = N;
    end
    
    traj_msg.pose.position.x = x(1,index);
    traj_msg.pose.position.y = x(2,index);
    traj_msg.pose.position.z = x(3,index);
    
    quat = eul2quat([x(4,index);x(5,index);x(6,index)]);
    
    traj_msg.pose.orientation.w = quat(1);
    traj_msg.pose.orientation.x = quat(2);
    traj_msg.pose.orientation.y = quat(3);
    traj_msg.pose.orientation.z = quat(4);
    
    % Send message via the publisher.
    send(traj_pub,traj_msg);
end

% Shutdown ROS network.
% catch
%     rosshutdown
% end