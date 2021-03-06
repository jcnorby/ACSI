function [x,K,u, t_wp, x_wp] = computeTrajHoop(t_current,N,dt,x0,xf,umax,x0_wp, dx0_wp, ddx0_wp, flag_wp)
x_wp = zeros(length(x0), N);
% Define waypoint trajectories
t = 0;
t_wp = -1;
x_wp(:,1) = [x0_wp;0;0;0;0;2*sign(xf(1) - x0(1));0;0;0;0]; 
for i = 2:N
%         x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
%         x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
    t = t+dt;
    
    x_wp(1:3,i) = x0_wp+dx0_wp*t+0.5*ddx0_wp*t^2;
    x_wp(7:9,i) = [0;2*sign(xf(2) - x0(2));0];
    
    dynamic_hoop_condition = (x_wp(3,i) >= 1 && ddx0_wp(3) < 0);
    static_hoop_condition = t<=(N/2*dt - t_current) && ddx0_wp(3) == 0;
    if (dynamic_hoop_condition || static_hoop_condition) && flag_wp
        t_wp = t;
    end
end

x = zeros(12, N);
x_bar = x;
u_ff = zeros(4,N);
u_bar = u_ff;
K = zeros(4,12,N-1);

% % Initialize controller with LQR solution
% g = 9.81;       % m/s^2
% m = 0.027;      % kg
% u0 = [m*g;0;0;0];
% 
% Q = 1e3*eye(length(x0));
% R = 1*eye(4);
% A = compute_A(x0,u0);
% B = compute_B(x0,u0);
% [K_lqr,S] = dlqr(A,B,Q,R);

% From loadK:
K_lqr = [-0.0000         0    1.3341         0    0.0000         0    0.0000         0    1.3743         0    0.0000         0
         0   -0.7856         0    4.7218         0   -0.0000         0   -1.1798         0    0.9194         0   -0.0000
    0.7856         0    0.0000         0    4.7218         0    1.1798         0    0.0000         0    0.9194         0
         0    0.0000         0   -0.0000         0    1.4473         0    0.0000         0   -0.0000         0    1.4909];
     
for ii = 1:N-1
    u_ff(:,ii) = [0;0;0;0];
    K(:,:,ii) = K_lqr;
end

% Forward simulate to get initial trajectory
[x_bar,u_bar] = forwardInt(x0, u_ff, umax,K, N,dt, xf);
x = x_bar;
u = u_bar;

% Execute SLQ solve to generate optimal trajectory and control
% [x,K,u] = slqSolve(x_bar,u_bar,umax,N,dt,x0, x_wp,t_wp, xf);