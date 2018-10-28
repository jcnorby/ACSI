syms x y z r p yaw dx dy dz dr dp dyaw real
syms u1 u2 u3 u4 u5 u6 real

x_bar = [x y z r p yaw dx dy dz dr dp dyaw]';
u_bar = [u1 u2 u3 u4 u5 u6]';

L = intermediateCost(x_bar,u_bar);
Phi = terminalCost(x_bar,u_bar);

q = L;
q_vec = jacobian(L,x_bar)';
Q = jacobian(q_vec,x_bar)';
P = jacobian(q_vec,u_bar)';
r = jacobian(L,u_bar)';
R = jacobian(r,u_bar)';

qN = Phi;
qN_vec = jacobian(Phi,x_bar)';
QN = jacobian(qN_vec,x_bar)';

matlabFunction(L, 'File', 'compute_L', 'Vars', {x_bar,u_bar});
matlabFunction(q, 'File', 'compute_q', 'Vars', {x_bar,u_bar});
matlabFunction(q_vec, 'File', 'compute_q_vec', 'Vars', {x_bar,u_bar});
matlabFunction(Q, 'File', 'compute_Q_mat', 'Vars', {x_bar,u_bar});
matlabFunction(P, 'File', 'compute_P', 'Vars', {x_bar,u_bar});
matlabFunction(r, 'File', 'compute_r_vec', 'Vars', {x_bar,u_bar});
matlabFunction(R, 'File', 'compute_R_mat', 'Vars', {x_bar,u_bar});

matlabFunction(qN, 'File', 'compute_qN', 'Vars', {x_bar});
matlabFunction(qN_vec, 'File', 'compute_qN_vec', 'Vars', {x_bar});
matlabFunction(QN, 'File', 'compute_QN_mat', 'Vars', {x_bar});