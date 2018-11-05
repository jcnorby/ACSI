function L = intermediateCost(t,x,u, x_bar,u_bar,x_wp, t_wp)

Q = 1*eye(12);
R = 0.5*eye(6);
Wp = 1000*eye(12);

rho = 200;

dx = x - x_bar;
du = u - u_bar;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;