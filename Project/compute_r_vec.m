function r = compute_r_vec(t,in2,in3,in4,in5,in6,t_wp)
%COMPUTE_R_VEC
%    R = COMPUTE_R_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    07-Nov-2018 15:25:47

u1 = in3(1,:);
u2 = in3(2,:);
u3 = in3(3,:);
u4 = in3(4,:);
u5 = in3(5,:);
u6 = in3(6,:);
u1b = in5(1,:);
u2b = in5(2,:);
u3b = in5(3,:);
u4b = in5(4,:);
u5b = in5(5,:);
u6b = in5(6,:);
r = [u1.*2.0-u1b.*2.0;u2.*2.0-u2b.*2.0;u3.*2.0-u3b.*2.0;u4.*2.0-u4b.*2.0;u5.*2.0-u5b.*2.0;u6.*2.0-u6b.*2.0];
