function L = intermediateCost(t,x,u, x_wp)

Q = 1*eye(12);
R = 0.5*eye(6);
Wp = 1000*eye(12);

rho = 200;

% x_wp = [0.5;0.5;1;0;0;0;
%     1;1;0;0;0;0];
t_wp = 1;

% x_bar = [1;1;1;0;0;0;
%     0;0;0;0;0;0];
% u_bar = [0;0;0;0;0;0];
% 
% dx = x - x_bar;
% du = u - u_bar;

dx = x;
du = u;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;