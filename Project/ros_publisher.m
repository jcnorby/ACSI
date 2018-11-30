rosinit

% try
% Create publisher for the '/chatter' topic with the 'std_msgs/String' message type.
traj_pub = rospublisher('/traj','geometry_msgs/PoseStamped');

% Create a message to send. Specify the Data property.
traj_msg = rosmessage(traj_pub);

load('angledTraj.mat')
N = length(x);
dt = 0.01;

hoop_sub = rossubscriber('/hoop_traj_calc','geometry_msgs/PoseStamped');
pause(1);

while(1)
    msg_hoop = receive(hoop_sub,10);
    secs = msg_hoop.header.secs;
    nsecs = msg_hoop.header.nsecs;
    
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