function B = compute_B(in1,in2)
%COMPUTE_B
%    B = COMPUTE_B(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    05-Nov-2018 19:01:57

% Version 1. Inputs are (q,u).
phi = in1(4,:);
psi_s = in1(6,:);
theta = in1(5,:);
t2 = cos(psi_s);
t3 = sin(phi);
t4 = cos(phi);
t5 = sin(psi_s);
t6 = sin(theta);
t7 = cos(theta);
t8 = t4.^2;
t9 = t3.^2;
t10 = t8.^2;
t11 = t7.^2;
t12 = t9.^2;
t13 = t6.^2;
t14 = t8.*t9.*2.0;
t15 = t10+t12+t14;
t16 = 1.0./t15;
t17 = 1.0./t7.^2;
t18 = 1.0./t7;
t19 = t3.*t4.*t6.*t16.*t18.*2.611127102265718e-1;
t20 = t6.*t8.*1.807579933084025e35;
t21 = t6.*t9.*3.190487472250719e35;
t22 = t20+t21;
t23 = t16.*t17.*t22.*1.888142936757087e-36;
t24 = t3.*t4.*t16.*t18.*2.611127102265718e-1;
B = reshape([0.0,0.0,0.0,0.0,0.0,0.0,t3.*t5.*(1.0e1./2.7e1)+t2.*t4.*t6.*(1.0e1./2.7e1),t2.*t3.*(-1.0e1./2.7e1)+t4.*t5.*t6.*(1.0e1./2.7e1),t4.*t7.*(1.0e1./2.7e1),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t16.*t17.*(t8.*t13.*1.807579933084025e35+t10.*t11.*3.190487472250719e35+t9.*t13.*3.190487472250719e35+t11.*t12.*3.190487472250719e35+t8.*t9.*t11.*6.380974944501438e35).*1.888142936757087e-36,t19,t23,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t19,t16.*t18.*(t7.*t8.*3.190487472250719e35+t7.*t9.*1.807579933084025e35).*1.888142936757087e-36,t24,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t23,t24,t16.*t17.*(t8.*1.807579933084025e35+t9.*3.190487472250719e35).*1.888142936757087e-36],[12,4]);
