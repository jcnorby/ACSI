syms x y z phi theta psi dx dy dz dphi dtheta dpsi real
syms xb yb zb phib thetab psib dxb dyb dzb dphib dthetab dpsib real
syms u1 u2 u3 u4 real
syms u1b u2b u3b u4b real
syms t t_wp x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12 real
syms xf_1 xf_2 xf_3 xf_4 xf_5 xf_6 xf_7 xf_8 xf_9 xf_10 xf_11 xf_12 real

x = [x y z phi theta psi dx dy dz dphi dtheta dpsi]';
xbar = [xb yb zb phib thetab psib dxb dyb dzb dphib dthetab dpsib]';
u = [u1 u2 u3 u4]';
ubar = [u1b u2b u3b u4b]';
x_wp = [x_wp_1 x_wp_2 x_wp_3 x_wp_4 x_wp_5 x_wp_6 x_wp_7 x_wp_8 x_wp_9 x_wp_10 x_wp_11 x_wp_12]';
xf = [xf_1 xf_2 xf_3 xf_4 xf_5 xf_6 xf_7 xf_8 xf_9 xf_10 xf_11 xf_12]';

L = intermediateCost(t,x,u,xbar,ubar,x_wp,t_wp);
Phi = terminalCost(x, xf);

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

matlabFunction(qN, 'File', 'compute_qN', 'Vars', {x,  xf});
matlabFunction(qN_vec, 'File', 'compute_qN_vec', 'Vars', {x, xf});
matlabFunction(QN, 'File', 'compute_QN_mat', 'Vars', {x, xf});