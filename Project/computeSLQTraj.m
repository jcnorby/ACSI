function [x,K,u] = computeSLQTraj(N,dt,x0,xf,t_wp,x_wp)

% % Initialize controller with LQR solution
% Q = 1e3*eye(length(x0));
% R = eye(length(u));
% A = compute_A(x0,u0);
% B = compute_B(x0,u0);
% [K_lqr,S] = dlqr(A,B,Q,R);
% save('loadK;', 'K_lqr');

% temp = load('loadK');
% K_lqr = temp.K_lqr;

x = zeros(12, N);
x_bar = x;
u_ff = zeros(4,N);
u_bar = u_ff;
K = zeros(4,12,N-1);

% From loadK:
K_lqr = [-0.0000         0    2.6672         0   -0.0000         0   -0.0000         0    2.7075         0   -0.0000         0
         0   -1.6111         0    9.2114         0    0.0000         0   -2.3790         0    1.7455         0    0.0000
    1.6111         0    0.0000         0    9.2114         0    2.3790         0    0.0000         0    1.7455         0
         0   -0.0000         0    0.0000         0    2.8908         0   -0.0000         0    0.0000         0    2.9344];
     
for ii = 1:N-1
    u_ff(:,ii) = [0;0;0;0];
    K(:,:,ii) = K_lqr;
end

% Forward simulate to get initial trajectory
[x_bar,u_bar] = forwardInt(x0, u_ff, K, N,dt, xf);
% x = x_bar;
% u = u_ff;

% Execute SLQ solve to generate optimal trajectory and control
[x,K,u] = slqSolve(x_bar,u_bar,N,dt,x0, x_wp,t_wp, xf);