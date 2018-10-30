function [x,u] = forwardIntTraj(x0, x_bar, u_bar,u_ff, K, N,dt)
x = x0;
umin = -10;
umax = 10;
for ii = 1:N
    u(:,ii) = u_bar(:,ii) + u_ff(:,ii) + K(:,:,ii)*(x(:,ii) - x_bar(:,ii));
%     u(:,ii) = min(umax, max(umin, u(:,ii)));
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end