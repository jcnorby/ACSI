function q_vec = compute_q_vec(t,in2,in3,in4,in5,in6,t_wp)
%COMPUTE_Q_VEC
%    Q_VEC = COMPUTE_Q_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    13-Nov-2018 22:26:24

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
t3 = t2.^2;
t5 = t3.*1.0e1;
t4 = exp(-t5);
q_vec = [x.*2.0e1+t4.*(x.*3.568248232305542e4-x_wp_1.*3.568248232305542e4)-2.0e1;y.*2.0e1-t4.*(x_wp_2.*3.568248232305542e4-y.*3.568248232305542e4)-2.0e1;z.*2.0e1-t4.*(x_wp_3.*3.568248232305542e4-z.*3.568248232305542e4)-2.0e1;phi.*2.0e1+t4.*(phi.*3.568248232305542e2-x_wp_4.*3.568248232305542e2);theta.*2.0e1+t4.*(theta.*3.568248232305542e2-x_wp_5.*3.568248232305542e2);psi.*2.0e1+t4.*(psi.*3.568248232305542e2-x_wp_6.*3.568248232305542e2);dx.*2.0e1+t4.*(dx.*3.568248232305542e2-x_wp_7.*3.568248232305542e2);dy.*2.0e1+t4.*(dy.*3.568248232305542e2-x_wp_8.*3.568248232305542e2);dz.*2.0e1+t4.*(dz.*3.568248232305542e2-x_wp_9.*3.568248232305542e2);dphi.*2.0e1;dtheta.*2.0e1;dpsi.*2.0e1];
