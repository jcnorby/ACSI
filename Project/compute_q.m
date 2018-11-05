function q = compute_q(t,in2,in3,in4,t_wp)
%COMPUTE_Q
%    Q = COMPUTE_Q(T,IN2,IN3,IN4,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    05-Nov-2018 16:34:03

dphi = in2(10,:);
dpsi = in2(12,:);
dtheta = in2(11,:);
dx = in2(7,:);
dy = in2(8,:);
dz = in2(9,:);
phi = in2(4,:);
psi = in2(6,:);
theta = in2(5,:);
x = in2(1,:);
x_wp_1 = in4(1,:);
x_wp_2 = in4(2,:);
x_wp_3 = in4(3,:);
x_wp_7 = in4(7,:);
x_wp_8 = in4(8,:);
x_wp_9 = in4(9,:);
y = in2(2,:);
z = in2(3,:);
t2 = t-t_wp;
q = exp(t2.^2.*-1.0e2).*((x.*1.0e7-x_wp_1.*1.0e7).*(x-x_wp_1).*5.641895835477563+(x_wp_2.*1.0e7-y.*1.0e7).*(x_wp_2-y).*5.641895835477563+(x_wp_3.*1.0e7-z.*1.0e7).*(x_wp_3-z).*5.641895835477563+(dx-x_wp_7).*(dx.*1.0e7-x_wp_7.*1.0e7).*5.641895835477563+(dy-x_wp_8).*(dy.*1.0e7-x_wp_8.*1.0e7).*5.641895835477563+(dz-x_wp_9).*(dz.*1.0e7-x_wp_9.*1.0e7).*5.641895835477563)+dphi.^2+dpsi.^2+dtheta.^2+dx.^2+dy.^2+dz.^2+phi.^2+psi.^2+theta.^2+x.^2+y.^2+z.^2;
