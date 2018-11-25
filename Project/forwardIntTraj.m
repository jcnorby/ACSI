function [x,u] = forwardIntTraj(x0, x_bar, u_bar,u_ff, K, N,dt)
x = zeros(size(x_bar));
u = zeros(size(u_bar));

x(:,1) = x0;

for ii = 1:N-1
    u(:,ii) = u_bar(:,ii) + u_ff(:,ii) + K(:,:,ii)*(x(:,ii) - x_bar(:,ii));
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end