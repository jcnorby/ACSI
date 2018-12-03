function [x,u] = forwardInt(x0,u_ff, umax,K, N,dt, x_bar)
x = zeros(12,N);
u = zeros(4,N-1);
u_fb = u;

x(:,1) = x0;

umin = -umax;

for ii = 1:N-1
    u_fb(:,ii) = -K(:,:,ii)*(x(:,ii) - x_bar);
    u(:,ii) = u_ff(:,ii) + u_fb(:,ii);
    u(:,ii) = min(umax, max(umin, u(:,ii)));
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end