function computeLinearizationSymbolic(dt)

syms x y z phi theta psi_s dx dy dz dphi dtheta dpsi real
syms u1 u2 u3 u4 real

q = [x y z phi theta psi_s dx dy dz dphi dtheta dpsi]';
u = [u1 u2 u3 u4]';

A = jacobian(f(q,u,dt), q);
B = jacobian(f(q,u,dt), u);

matlabFunction(A, 'File', 'compute_A', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');
matlabFunction(B, 'File', 'compute_B', 'Vars', {q,u}, 'Comments', ' Version 1. Inputs are (q,u).');