function [x,K,u, t_wp, x_wp] = computeSLQTrajHoop(N,dt,x0,xf, x0_wp, dx0_wp, ddx0_wp)
x_wp = zeros(length(x0), N);
% Define waypoint trajectories
t = 0;
t_wp = -1;
x_wp(:,1) = [x0_wp;0;0;0;2*sign(xf(1) - x0(1));0;0;0;0;0]; 
for i = 2:N
%         x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
%         x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
    t = t+dt;
    
    x_wp(1:3,i) = x0_wp+dx0_wp*t+0.5*ddx0_wp*t^2;
    x_wp(7:9,i) = [2*sign(xf(1) - x0(1));0;0];
    
    if ((x_wp(3,i) <= 0.9) || t>=N/2*dt) && (t_wp < 0)
        t_wp = t;
    end
    
%     if abs(t - t_wp)<1e-4
%         i_wp = i;
%     end
end

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