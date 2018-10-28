function qN_vec = compute_qN_vec(in1)
%COMPUTE_QN_VEC
%    QN_VEC = COMPUTE_QN_VEC(IN1)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    27-Oct-2018 23:35:28

dp = in1(11,:);
dr = in1(10,:);
dx = in1(7,:);
dy = in1(8,:);
dyaw = in1(12,:);
dz = in1(9,:);
p = in1(5,:);
r = in1(4,:);
x = in1(1,:);
y = in1(2,:);
yaw = in1(6,:);
z = in1(3,:);
qN_vec = [x.*2.0-2.0;y.*2.0-2.0;z.*2.0-2.0;r.*2.0;p.*2.0;yaw.*2.0;dx.*2.0;dy.*2.0;dz.*2.0;dr.*2.0;dp.*2.0;dyaw.*2.0];
