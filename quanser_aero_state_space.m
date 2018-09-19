close all
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