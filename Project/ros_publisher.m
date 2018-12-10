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

hoop_pos_sub = rossubscriber('/hoop_pos','geometry_msgs/Vector3');
hoop_vel_sub = rossubscriber('/hoop_vel','geometry_msgs/Vector3');
cf_sub = rossubscriber('/crazyflie/optitrack/rigid_bodies','optitrack/RigidBodyArray'); % crazyflie/
launch_sub = rossubscriber('/manual_launch','std_msgs/Bool');
quad_vel_sub = rossubscriber('/vel','geometry_msgs/Vector3');
quad_ang_vel_sub = rossubscriber('/angVel','geometry_msgs/Vector3');

% global quad_pos;
% global quad_orient;
% global hoop_pos;
% global msg_launch_data;
% global quad_vel;
% global quad_ang_vel;

pause(2);

% load('angledTraj.mat')
N = 151;
dt = 0.02;

hoop_pos = [0;0;1];
hoop_vel = [0;0;0];
quad_pos = [0;0;0];
quad_vel = [0;0;0];
quad_orient = [0;0;0];
quad_ang_vel = [0;0;0];
msg_launch_data = false;

x_start = [0.0;1.0;2.0;0;0;0
    0;0;0;0;0;0];
x_end = [0;-1.5;2.0;0;0;0
    0;0;0;0;0;0];

% x_end = [0.6;0;1;0;0;0
%     0;0;0;0;0;0];
xf = x_start;
x = x_start;

hoop_vel = [0;0;0];
% hoop_accel = [0;0;0];
hoop_accel = [0;0;-9.81];
t_compute = -10000.;
cf_cmd_hist = [];
cf_actual_hist = []; 
launch_flag = false;
compute_traj_flag = true;

u = 9.81*0.034;
umax = 0.4;
height_wp = 2.0;
t_current=0;
trajNum = 0;
trial = ['1_',datestr(datetime('now'))];

while(1)    
    if ~isempty(cf_sub.LatestMessage)
        msg_cf = cf_sub.LatestMessage;    
        quad_pos = [msg_cf.Bodies(1).Pose.Position.X; msg_cf.Bodies(1).Pose.Position.Y; msg_cf.Bodies(1).Pose.Position.Z];
        quad_orient_quat = [msg_cf.Bodies(1).Pose.Orientation.W;
                                    msg_cf.Bodies(1).Pose.Orientation.X; 
                                    msg_cf.Bodies(1).Pose.Orientation.Y; 
                                    msg_cf.Bodies(1).Pose.Orientation.Z]';
        quad_orient = flipud(quat2eul(quad_orient_quat)');
    end
    
    if ~isempty(quad_vel_sub.LatestMessage)    
        quad_vel_msg = quad_vel_sub.LatestMessage;
        quad_vel = [quad_vel_msg.X; quad_vel_msg.Y;quad_vel_msg.Z];
    end
    
    if ~isempty(quad_ang_vel_sub.LatestMessage)    
        quad_ang_vel_msg = quad_ang_vel_sub.LatestMessage;
        quad_ang_vel = [quad_ang_vel_msg.X; quad_ang_vel_msg.Y;quad_ang_vel_msg.Z];
    end
    
    if ~isempty(hoop_pos_sub.LatestMessage)    
        hoop_pos_msg = hoop_pos_sub.LatestMessage;
        hoop_pos = [hoop_pos_msg.X; hoop_pos_msg.Y; hoop_pos_msg.Z];
    end

    if ~isempty(hoop_vel_sub.LatestMessage)    
        hoop_vel_msg = hoop_vel_sub.LatestMessage;
        hoop_vel = [hoop_vel_msg.X; hoop_vel_msg.Y; hoop_vel_msg.Z];
    end
    
    if ~isempty(launch_sub.LatestMessage)    
        msg_launch_data = launch_sub.LatestMessage.Data;
    end
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

%     quad_vel;
%     quad_ang_vel;
%     quad_vel = [0;0;0];
%     quad_ang_vel = [0;0;0];
    x0 = [quad_pos;quad_orient;quad_vel;quad_ang_vel];
    if launch_flag && ((t-t_compute) >=0.2) && t < 0.65
        x0
%         hoop_vel(1:2) = [0;0];
        hoop_vel(1) = 0.5*hoop_vel(1);
        [xtraj,K,u,i_wp, t_wp, x_wp] = computeSLQTrajHoop_mex(t,N,dt,x0,xf,umax,height_wp,hoop_pos, hoop_vel, hoop_accel, launch_flag);
        save(['trajData_', trial, '_',num2str(trajNum)], 't','x0','xtraj', 'i_wp','t_wp', 'x_wp');
        if ~isnan(x(end, end))
            x = xtraj;
        end
        t_compute = t;
        trajNum = trajNum+1;
%         if t > .1
%             disp('hi')
%         end
    end
       
    if launch_flag
        index_u = floor((t-t_compute)/dt)+1;
%         index = floor((t)/dt)+1;
        index_x = floor((t-t_compute)/dt)+18;
    else
        index = floor(t/dt)+1;
        index_u = index;
        index_x = index;
    end
    
    if index >= N
        index = N-1;
    elseif index<1
        index = 1;
    end
    
    
%     thrustVec = (eul2rotm(flipud(x(4:6,index))'))*[0;0;u(1,index)];
%     u_ff = [2*180/pi;2*180/pi;125170].*thrustVec;
    
    index;
    
    u_ff_msg.X = x(4,index_u);
    u_ff_msg.Y = x(5,index_u);
    u_ff_msg.Z = u(1,index_u);
    
    traj_msg.Pose.Position.X = x(1,index_x);
    traj_msg.Pose.Position.Y = x(2,index_x);
    traj_msg.Pose.Position.Z = x(3,index_x);
    
    trajVel_msg.X = x(7,index_x);
    trajVel_msg.Y = x(8,index_x);
    trajVel_msg.Z = x(9,index_x);
    
%     cf_cmd_hist = [cf_cmd_hist; t, x(1,index), x(2,index), x(3,index)];
    
    quat = eul2quat([x(6,index_x) x(5,index_x) x(4,index_x)]);
    
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