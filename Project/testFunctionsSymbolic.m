syms x y z r p yaw dx dy dz dr dp dyaw real
syms u1 u2 u3 u4 u5 u6 real
syms t  t_wp x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12 real

x_bar = [x y z r p yaw dx dy dz dr dp dyaw]';
u_bar = [u1 u2 u3 u4 u5 u6]';
x_wp = [x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12]';

L = intermediateCost(t, x_bar,u_bar, x_wp,t_wp);
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

matlabFunction(L, 'File', 'compute_L', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(q, 'File', 'compute_q', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(q_vec, 'File', 'compute_q_vec', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(Q, 'File', 'compute_Q_mat', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(P, 'File', 'compute_P', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(r, 'File', 'compute_r_vec', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});
matlabFunction(R, 'File', 'compute_R_mat', 'Vars', {t,x_bar,u_bar, x_wp,t_wp});

matlabFunction(qN, 'File', 'compute_qN', 'Vars', {x_bar});
matlabFunction(qN_vec, 'File', 'compute_qN_vec', 'Vars', {x_bar});
matlabFunction(QN, 'File', 'compute_QN_mat', 'Vars', {x_bar});