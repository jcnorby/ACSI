function [x,u] = forwardInt(x0,u_ff, K, N,dt, x_bar)
x = zeros(12,N);
u = zeros(4,N-1);
u_fb = u;

x(:,1) = x0;

for ii = 1:N-1
    u_fb(:,ii) = -K(:,:,ii)*(x(:,ii) - x_bar);
    u(:,ii) = u_ff(:,ii) + u_fb(:,ii);
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end