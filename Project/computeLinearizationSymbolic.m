syms x y z r p yaw dx dy dz dr dp dyaw real
syms u1 u2 u3 u4 u5 u6 real

q = [x y z r p yaw dx dy dz dr dp dyaw]';
u = [u1 u2 u3 u4 u5 u6]';

T = 0.1;

% xnew = f(q,u,T)

A = jacobian(f(q,u,T), q);
B = jacobian(f(q,u,T), u);

matlabFunction(A, 'File', 'computeA', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');
matlabFunction(B, 'File', 'computeB', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');