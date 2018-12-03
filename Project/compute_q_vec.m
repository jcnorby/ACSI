function q_vec = compute_q_vec(t,in2,in3,in4,in5,in6,t_wp)
%COMPUTE_Q_VEC
%    Q_VEC = COMPUTE_Q_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    03-Dec-2018 16:04:04

dphi = in2(10,:);
dphib = in4(10,:);
dpsi = in2(12,:);
dpsib = in4(12,:);
dtheta = in2(11,:);
dthetab = in4(11,:);
dx = in2(7,:);
dxb = in4(7,:);
dy = in2(8,:);
dyb = in4(8,:);
dz = in2(9,:);
dzb = in4(9,:);
phi = in2(4,:);
phib = in4(4,:);
psib = in4(6,:);
psi = in2(6,:);
thetab = in4(5,:);
theta = in2(5,:);
x = in2(1,:);
x_wp_1 = in6(1,:);
x_wp_2 = in6(2,:);
x_wp_3 = in6(3,:);
x_wp_4 = in6(4,:);
x_wp_5 = in6(5,:);
x_wp_6 = in6(6,:);
x_wp_7 = in6(7,:);
x_wp_8 = in6(8,:);
x_wp_9 = in6(9,:);
xb = in4(1,:);
y = in2(2,:);
yb = in4(2,:);
z = in2(3,:);
zb = in4(3,:);
t2 = t-t_wp;
t3 = t2.^2;
t5 = t3.*1.0e2;
t4 = exp(-t5);
q_vec = [x.*2.0e1-xb.*2.0e1+t4.*(x.*1.128379167095513e5-x_wp_1.*1.128379167095513e5);y.*2.0e1-yb.*2.0e1-t4.*(x_wp_2.*1.128379167095513e5-y.*1.128379167095513e5);z.*2.0e1-zb.*2.0e1-t4.*(x_wp_3.*1.128379167095513e5-z.*1.128379167095513e5);phi.*2.0e1-phib.*2.0e1+t4.*(phi.*1.128379167095513e3-x_wp_4.*1.128379167095513e3);thetab.*-2.0e1+theta.*2.0e1+t4.*(theta.*1.128379167095513e3-x_wp_5.*1.128379167095513e3);psib.*-2.0e1+psi.*2.0e1+t4.*(psi.*1.128379167095513e3-x_wp_6.*1.128379167095513e3);dx.*2.0e1-dxb.*2.0e1+t4.*(dx.*1.128379167095513e3-x_wp_7.*1.128379167095513e3);dy.*2.0e1-dyb.*2.0e1+t4.*(dy.*1.128379167095513e3-x_wp_8.*1.128379167095513e3);dz.*2.0e1-dzb.*2.0e1+t4.*(dz.*1.128379167095513e3-x_wp_9.*1.128379167095513e3);dphi.*2.0e1-dphib.*2.0e1;dtheta.*2.0e1-dthetab.*2.0e1;dpsi.*2.0e1-dpsib.*2.0e1];
