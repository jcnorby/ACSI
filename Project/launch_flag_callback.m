function launch_flag_callback(~, message)
    msg_launch = message;
    % Declare global variables to store position and orientation
    global msg_launch_data
    
    % Extract position and orientation from the ROS message and assign the
    % data to the global variables.
    msg_launch_data = msg_launch.Data;
end