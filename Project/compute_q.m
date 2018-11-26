function q = compute_q(t,in2,in3,in4,in5,in6,t_wp)
%COMPUTE_Q
%    Q = COMPUTE_Q(T,IN2,IN3,IN4,IN5,IN6,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    25-Nov-2018 15:45:00

dphi = in2(10,:);
dpsi = in2(12,:);
dtheta = in2(11,:);
dx = in2(7,:);
dy = in2(8,:);
dz = in2(9,:);
phi = in2(4,:);
psi = in2(6,:);
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
y = in2(2,:);
z = in2(3,:);
t2 = t-t_wp;
q = (u1.*1.0e3-u1b.*1.0e3).*(u1-u1b)+(u2.*1.0e3-u2b.*1.0e3).*(u2-u2b)+(u3.*1.0e3-u3b.*1.0e3).*(u3-u3b)+(u4.*1.0e3-u4b.*1.0e3).*(u4-u4b)+exp(t2.^2.*-5.0e1).*((phi.*1.0e2-x_wp_4.*1.0e2).*(phi-x_wp_4).*3.989422804014327+(psi.*1.0e2-x_wp_6.*1.0e2).*(psi-x_wp_6).*3.989422804014327+(theta.*1.0e2-x_wp_5.*1.0e2).*(theta-x_wp_5).*3.989422804014327+(x.*1.0e4-x_wp_1.*1.0e4).*(x-x_wp_1).*3.989422804014327+(x_wp_2.*1.0e4-y.*1.0e4).*(x_wp_2-y).*3.989422804014327+(x_wp_3.*1.0e4-z.*1.0e4).*(x_wp_3-z).*3.989422804014327+(dx-x_wp_7).*(dx.*1.0e2-x_wp_7.*1.0e2).*3.989422804014327+(dy-x_wp_8).*(dy.*1.0e2-x_wp_8.*1.0e2).*3.989422804014327+(dz-x_wp_9).*(dz.*1.0e2-x_wp_9.*1.0e2).*3.989422804014327)+(x.*1.0e1-1.0e1).*(x-1.0)+(y.*1.0e1-1.0e1).*(y-1.0)+(z.*1.0e1-1.0e1).*(z-1.0)+dphi.^2.*1.0e1+dpsi.^2.*1.0e1+dtheta.^2.*1.0e1+dx.^2.*1.0e1+dy.^2.*1.0e1+dz.^2.*1.0e1+phi.^2.*1.0e1+psi.^2.*1.0e1+theta.^2.*1.0e1;
