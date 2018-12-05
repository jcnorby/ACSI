function quad_pose_callback(~, message)
    msg_cf = message;
    % Declare global variables to store position and orientation
    global quad_pos
    global quad_orient
    
    % Extract position and orientation from the ROS message and assign the
    % data to the global variables.
    quad_pos = [msg_cf.Bodies(1).Pose.Position.X; msg_cf.Bodies(1).Pose.Position.Y; msg_cf.Bodies(1).Pose.Position.Z];
    
    quad_orient_quat = [msg_cf.Bodies(1).Pose.Orientation.W;
                                msg_cf.Bodies(1).Pose.Orientation.X; 
                                msg_cf.Bodies(1).Pose.Orientation.Y; 
                                msg_cf.Bodies(1).Pose.Orientation.Z]';
    quad_orient = flipud(quat2eul(quad_orient_quat)');
end