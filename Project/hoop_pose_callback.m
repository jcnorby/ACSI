function hoop_pose_callback(~, message)
    msg_hoop = message;
    % Declare global variables to store position and orientation
    global hoop_pos
    
    % Extract position and orientation from the ROS message and assign the
    % data to the global variables.
    hoop_pos = [msg_hoop.Pose.Position.X; msg_hoop.Pose.Position.Y; msg_hoop.Pose.Position.Z];
end