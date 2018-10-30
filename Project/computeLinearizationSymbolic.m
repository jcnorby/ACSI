function computeLinearizationSymbolic(dt)

syms x y z r p yaw dx dy dz dr dp dyaw real
syms u1 u2 u3 u4 u5 u6 real

q = [x y z r p yaw dx dy dz dr dp dyaw]';
u = [u1 u2 u3 u4 u5 u6]';

A = jacobian(f(q,u,dt), q);
B = jacobian(f(q,u,dt), u);

matlabFunction(A, 'File', 'compute_A', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');
matlabFunction(B, 'File', 'compute_B', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');