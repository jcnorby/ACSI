function [x,u] = forwardInt(x0,u_ff, K, N,dt, x_bar)
x = x0;
for ii = 1:N
    u_fb(:,ii) = -K(:,:,ii)*(x(:,ii) - x_bar);
    u(:,ii) = u_ff(:,ii) + u_fb(:,ii);
    x(:,ii+1) = f(x(:,ii),u(:,ii),dt);
end