function qN_vec = compute_qN_vec(in1,in2)
%COMPUTE_QN_VEC
%    QN_VEC = COMPUTE_QN_VEC(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    03-Dec-2018 16:04:06

dphi = in1(10,:);
dpsi = in1(12,:);
dtheta = in1(11,:);
dx = in1(7,:);
dy = in1(8,:);
dz = in1(9,:);
phi = in1(4,:);
psi = in1(6,:);
theta = in1(5,:);
x = in1(1,:);
xf_1 = in2(1,:);
xf_2 = in2(2,:);
xf_3 = in2(3,:);
xf_4 = in2(4,:);
xf_5 = in2(5,:);
xf_6 = in2(6,:);
xf_7 = in2(7,:);
xf_8 = in2(8,:);
xf_9 = in2(9,:);
xf_10 = in2(10,:);
xf_11 = in2(11,:);
xf_12 = in2(12,:);
y = in1(2,:);
z = in1(3,:);
qN_vec = [x.*2.0e5-xf_1.*2.0e5;xf_2.*-2.0e5+y.*2.0e5;xf_3.*-2.0e5+z.*2.0e5;phi.*2.0e2-xf_4.*2.0e2;theta.*2.0e2-xf_5.*2.0e2;psi.*2.0e2-xf_6.*2.0e2;dx.*2.0e5-xf_7.*2.0e5;dy.*2.0e5-xf_8.*2.0e5;dz.*2.0e5-xf_9.*2.0e5;dphi.*2.0-xf_10.*2.0;dtheta.*2.0-xf_11.*2.0;dpsi.*2.0-xf_12.*2.0];
