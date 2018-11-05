syms x y z r p yaw dx dy dz dr dp dyaw real
syms xb yb zb rb pb yawb dxb dyb dzb drb dpb dyaw real
syms u1 u2 u3 u4 u5 u6 real
syms u1b u2b u3b u4b u5b u6b real
syms t  t_wp x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12 real

x = [x y z r p yaw dx dy dz dr dp dyaw]';
xbar = [xb yb zb rb pb yawb dxb dyb dzb drb dpb dyaw]';
u = [u1 u2 u3 u4 u5 u6]';
ubar = [u1b u2b u3b u4b u5b u6b]';
x_wp = [x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12]';

L = intermediateCost(t,x,u,xbar,ubar,x_wp,t_wp);
Phi = terminalCost(x,u);

q = L;
q_vec = jacobian(L,x)';
Q = jacobian(q_vec,x)';
P = jacobian(q_vec,u)';
r = jacobian(L,u)';
R = jacobian(r,u)';

qN = Phi;
qN_vec = jacobian(Phi,x)';
QN = jacobian(qN_vec,x)';

matlabFunction(L, 'File', 'compute_L', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(q, 'File', 'compute_q', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(q_vec, 'File', 'compute_q_vec', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(Q, 'File', 'compute_Q_mat', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(P, 'File', 'compute_P', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(r, 'File', 'compute_r_vec', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});
matlabFunction(R, 'File', 'compute_R_mat', 'Vars', {t,x,u,xbar,ubar, x_wp,t_wp});

matlabFunction(qN, 'File', 'compute_qN', 'Vars', {x});
matlabFunction(qN_vec, 'File', 'compute_qN_vec', 'Vars', {x});
matlabFunction(QN, 'File', 'compute_QN_mat', 'Vars', {x});