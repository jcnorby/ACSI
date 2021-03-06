close all;clear;clc
quanser_aero_parameters
%% State-Space Representation
A = [0 0 1 0;
    0 0 0 1;
    -Ksp/Jp 0 -Dp/Jp 0;
    0 0 0 -Dy/Jy];

B = [0 0;
    0 0;
    Kpp/Jp Kpy/Jp;
    Kyp/Jy Kyy/Jy];

C = eye(2,4);
D = zeros(2,2);
% 

Q = diag([1000 200 0 0]);
% Q = diag([2000 1000 0 0]);
R = diag([.003 .003]);
% R = diag([.001 .5]);
K = lqr(A, B, Q, R);

% p1 = -5+5j;
% p2 = -5-5j;
% p3 = -10;
% p4 = -20;
% K = place(A, B, [p1 p2 p3 p4]);
% pzplot(ss(A-B*K, B, C, D))

po = [-100 -101 -102 -103];
% po = [-30 -31 -32 -33];
L = place(A', C', po)';

% clsys = ss(A-B*K, B, C, D);

%% Convert to Discrete Time
T = 0.002; % From line 25 in arduino code

Cs = ss(A+B*K-L*C, L, K, 0);
Cd = c2d(Cs, T, 'foh');
K_d2 = Cd.C
L_d2 = Cd.B

% I = eye(4);
% 
% Ad = (I + A*T/2)*inv((I - A*T/2)); % from tustin
% Bd = inv(I - A*T/2)*B*sqrt(T);
% Cd = sqrt(T)*C*inv(I - A*T/2);
% Dd = D + C*inv(I - A*T/2)*B*T/2;
% 
% sysc = ss(A,B,C,D);
% sysd = c2d(sysc, T, 'foh');
% 
% K_d = dlqr(sysd.A,sysd.B,Q,R) % gives the same result...
% L_d = place(sysd.A', sysd.C', [-0.01 0 0.01 0.02])'