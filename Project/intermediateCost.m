function L = intermediateCost(t,x,u, x_wp, t_wp)

% Q = 1*eye(12);
% R = 0.5*eye(4);
% Wp = 1000*eye(12);
% Wp(4:6,4:6) = zeros(3,3);
% Wp(10:12,10:12) = zeros(3,3);
Q = 1*eye(12);
R = 0.0*eye(4);
Wp = 10000000*eye(12);
Wp(4:6,4:6) = zeros(3,3);
Wp(10:12,10:12) = zeros(3,3);

rho = 200;
% rho = 2;

dx = x;
du = u;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;
% L = dx'*Q*dx + du'*R*du;