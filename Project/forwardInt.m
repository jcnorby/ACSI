function [x,u] = forwardInt(x0,u_ff, K, N,dt, x_bar)
x = zeros(size(x_bar));

x = x0;
u = zeros(size(u_ff));
u_fb = zeros(size(u_ff));

for ii = 1:N-1
    u_fb(:,ii) = -K(:,:,ii)*(x(:,ii) - x_bar);
    u(:,ii) = u_ff(:,ii) + u_fb(:,ii);
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end