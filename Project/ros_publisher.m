if robotics.ros.internal.Global.isNodeActive == 0 % if node not active
    rosinit
end

clc
clear
% try
% Create publisher for the '/chatter' topic with the 'std_msgs/String' message type.
traj_pub = rospublisher('/traj','geometry_msgs/PoseStamped');
trajVel_pub = rospublisher('/trajVel','geometry_msgs/Vector3');
u_ff_pub = rospublisher('/feedfwd','geometry_msgs/Vector3');

% Create a message to send. Specify the Data property.
traj_msg = rosmessage(traj_pub);
u_ff_msg = rosmessage(u_ff_pub);
trajVel_msg = rosmessage(trajVel_pub);

hoop_sub = rossubscriber('/hoop_traj_calc','geometry_msgs/PoseStamped', @hoop_pose_callback);
cf_sub = rossubscriber('/optitrack/rigid_bodies','optitrack/RigidBodyArray', quad_pose_callback); % crazyflie/
launch_sub = rossubscriber('/manual_launch','std_msgs/Bool', @launch_flag_callback);
quad_vel_sub = rossubscriber('/vel','geometry_msgs/Vector3', @quad_vel_callback);
quad_angVel_sub = rossubscriber('/angVel','geometry_msgs/Vector3', @quad_ang_vel_callback);

global quad_pos;
global quad_orient;
global hoop_pos;
global msg_launch_data;
global quad_vel;
global quad_ang_vel;

pause(2);

% load('angledTraj.mat')
N = 151;
dt = 0.02;

% hoop_pos = [0;0;1];
% quad_pos = [0;0;0];
% quad_vel = [0;0;0];
% quad_orient = [0;0;0];
% quad_ang_vel = [0;0;0];

x_start = [1.0;0;1;0;0;0
    0;0;0;0;0;0];
x_end = [-0.175;2;2;0;0;0
    0;0;0;0;0;0];
xf = x_start;
x = x_start;

hoop_vel = [0;0;0];
hoop_accel = [0;0;0];
% hoop_accel = [0;0;-9.81];

cf_cmd_hist = [];
cf_actual_hist = []; 
launch_flag = false;
compute_traj_flag = true;

u = 9.81*0.034;
umax = 0.4;
t_current=0;
while(1)
%     quad_vel = receive(vel_sub,180);
%     quad_velorientation = receive(angVel_sub,180);
%     msg_hoop = receive(hoop_sub,180);
%     msg_launch = receive(launch_sub,180);    
%     msg_cf = receive(cf_sub, 180);
    
%     cf_actual_hist = [cf_actual_hist; msg_cf.Header.Stamp.Sec + msg_cf.Header.Stamp.Nsec / 1e9, ... 
%         quad_pos]; 
    
    if ~msg_launch_data
        launchTime = rostime('now');  
    elseif msg_launch_data && ~launch_flag
        launchTime = rostime('now');  
        launch_flag = true;
        xf = x_end;
    end
    secs = launchTime.Sec; % this is for when msg_launch is active
    nsecs = launchTime.Nsec;    
    curTime = rostime('now');

    t = (curTime.Sec + curTime.Nsec / 1e9) - (secs + nsecs/1e9);

    x0 = [quad_pos;quad_orient;quad_vel;quad_ang_vel];
    if compute_traj_flag && launch_flag
        [x,K,u, t_wp, x_wp] = computeSLQTrajHoop_mex(t,N,dt,x0,xf,umax,hoop_pos, hoop_vel, hoop_accel, launch_flag);
        compute_traj_flag = false;
    end
       
    if launch_flag
        index = floor(t/dt)+1;
    else
        index = floor(t/dt)+1;
    end
    
    if index >= N
        index = N-1;
    elseif index<1
        index = 1;
    end
    
    
%     thrustVec = (eul2rotm(flipud(x(4:6,index))'))*[0;0;u(1,index)];
%     u_ff = [2*180/pi;2*180/pi;125170].*thrustVec;
    
    index;
    
    u_ff_msg.X = x(4,index);
    u_ff_msg.Y = x(5,index);
    u_ff_msg.Z = u(1,index);
    
    traj_msg.Pose.Position.X = x(1,index);
    traj_msg.Pose.Position.Y = x(2,index);
    traj_msg.Pose.Position.Z = x(3,index);
    
    trajVel_msg.Pose.Position.X = x(7,index);
    trajVel_msg.Pose.Position.Y = x(8,index);
    trajVel_msg.Pose.Position.Z = x(9,index);
    
    cf_cmd_hist = [cf_cmd_hist; t, x(1,index), x(2,index), x(3,index)];
    
    quat = eul2quat([x(6,index) x(5,index) x(4,index)]);
    
    traj_msg.Pose.Orientation.W = quat(1);
    traj_msg.Pose.Orientation.X = quat(2);
    traj_msg.Pose.Orientation.Y = quat(3);
    traj_msg.Pose.Orientation.Z = quat(4);
    
    % Send message via the publisher.
    send(traj_pub,traj_msg);
    send(u_ff_pub,u_ff_msg);
    send(trajVel_pub,trajVel_msg);
 
end
% save('cf_cmd_hist.mat', cf_cmd_hist)

% Shutdown ROS network.
% catch
%     rosshutdown
% end