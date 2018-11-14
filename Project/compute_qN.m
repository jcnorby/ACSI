function qN = compute_qN(in1,in2)
%COMPUTE_QN
%    QN = COMPUTE_QN(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    13-Nov-2018 22:26:25

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
t2 = dphi-xf_10;
t3 = dpsi-xf_12;
t4 = dtheta-xf_11;
qN = (phi.*1.0e2-xf_4.*1.0e2).*(phi-xf_4)+(psi.*1.0e2-xf_6.*1.0e2).*(psi-xf_6)+(theta.*1.0e2-xf_5.*1.0e2).*(theta-xf_5)+(x.*1.0e5-xf_1.*1.0e5).*(x-xf_1)+(xf_2.*1.0e5-y.*1.0e5).*(xf_2-y)+(xf_3.*1.0e5-z.*1.0e5).*(xf_3-z)+t2.^2+t3.^2+t4.^2+(dx-xf_7).*(dx.*1.0e5-xf_7.*1.0e5)+(dy-xf_8).*(dy.*1.0e5-xf_8.*1.0e5)+(dz-xf_9).*(dz.*1.0e5-xf_9.*1.0e5);
