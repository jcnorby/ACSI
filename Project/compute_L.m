function L = compute_L(t,in2,in3,in4,in5,in6,t_wp)
%COMPUTE_L
%    L = COMPUTE_L(T,IN2,IN3,IN4,IN5,IN6,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    10-Dec-2018 00:20:12

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
u1 = in3(1,:);
u2 = in3(2,:);
u3 = in3(3,:);
u4 = in3(4,:);
u1b = in5(1,:);
u2b = in5(2,:);
u3b = in5(3,:);
u4b = in5(4,:);
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
L = (thetab.*1.0e1-theta.*1.0e1).*(thetab-theta)+(u1.*5.0e4-u1b.*5.0e4).*(u1-u1b)+(u2.*5.0e4-u2b.*5.0e4).*(u2-u2b)+(u3.*5.0e4-u3b.*5.0e4).*(u3-u3b)+(u4.*5.0e4-u4b.*5.0e4).*(u4-u4b)+(x.*1.0e1-xb.*1.0e1).*(x-xb)+(y.*1.0e1-yb.*1.0e1).*(y-yb)+(z.*1.0e1-zb.*1.0e1).*(z-zb)+exp(t2.^2.*-1.0e2).*((phi.*1.0e2-x_wp_4.*1.0e2).*(phi-x_wp_4).*5.641895835477563+(psi.*1.0e2-x_wp_6.*1.0e2).*(psi-x_wp_6).*5.641895835477563+(theta.*1.0e2-x_wp_5.*1.0e2).*(theta-x_wp_5).*5.641895835477563+(x.*1.0e4-x_wp_1.*1.0e4).*(x-x_wp_1).*5.641895835477563+(x_wp_2.*1.0e4-y.*1.0e4).*(x_wp_2-y).*5.641895835477563+(x_wp_3.*1.0e4-z.*1.0e4).*(x_wp_3-z).*5.641895835477563+(dx-x_wp_7).*(dx.*1.0e2-x_wp_7.*1.0e2).*5.641895835477563+(dy-x_wp_8).*(dy.*1.0e2-x_wp_8.*1.0e2).*5.641895835477563+(dz-x_wp_9).*(dz.*1.0e2-x_wp_9.*1.0e2).*5.641895835477563)+(dphi-dphib).*(dphi.*1.0e1-dphib.*1.0e1)+(dpsi-dpsib).*(dpsi.*1.0e1-dpsib.*1.0e1)+(dtheta-dthetab).*(dtheta.*1.0e1-dthetab.*1.0e1)+(dx-dxb).*(dx.*1.0e1-dxb.*1.0e1)+(dy-dyb).*(dy.*1.0e1-dyb.*1.0e1)+(dz-dzb).*(dz.*1.0e1-dzb.*1.0e1)+(phi-phib).*(phi.*1.0e1-phib.*1.0e1)+(psib-psi).*(psib.*1.0e1-psi.*1.0e1);
