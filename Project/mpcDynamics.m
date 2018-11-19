function dx = mpcDynamics(t,x0,N,dt,t_wp,xf,u_ff,K)
dx = zeros(12,1);
dx(1:6) = x0(7:12);

t0 = t;
T = (N-1)*dt;

x0(1:3) = x0(1:3) + (0.1*rand(3,1) - 0.05);
% x0(7:9) = x0(7:9) + (0.2*rand(3,1) - 0.1);

for i = 1:N
%     x_wp(:,i) = [0.25;0.5;sin(2*pi*t/3);0;0;0;
%         1;1;0;0;0;0];
    x_wp(:,i) = [0.25;cos(2*pi*t/4);0.5*sin(2*pi*t/4);0;0;0;
        0.5;0.5;0.5;0;0;0];
    t = t+dt;
    
    if abs(t - t_wp)<1e-4
        i_wp = i;
    end
end

t_wp = t_wp - t0;

% if t_wp>0
%     xf = x_wp(:,i_wp);
% end

% Forward simulate to get initial trajectory
[x_bar,u_bar] = forwardInt(x0, u_ff, K, N,dt, xf);

[x_bar,K,u_ff] = slqSolve(x_bar,u_bar,N,dt,x0,x_wp,t_wp,xf);



% tvec = 0:dt:N;
% u_ff = interp(tvec, u_ff, t)';
% x_bar = interp(tvec, x_bar, t)';
% K = reshape(interp1(tvec, reshape(K,numel(K(:,:,1)),N)', t),2,2)
u = u_ff(:,1) + K(:,:,1)*(x0 - x_bar(:,1));

dx = getDynSys(x0,u);