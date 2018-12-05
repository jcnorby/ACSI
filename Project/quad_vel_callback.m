function quad_vel_callback(~, message)
    
% Declare global variables to store position and orientation
    global quad_vel
    
    % Extract position and orientation from the ROS message and assign the
    % data to the global variables.
    quad_vel = [message.X; message.Y;message.Z];
end