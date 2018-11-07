function L = intermediateCost(t,x,u,xbar,ubar,x_wp, t_wp)

xbar(4:6) = zeros(3,1);
xbar(10:12) = zeros(3,1);
% Q = 1*eye(12);
% R = 0.5*eye(4);
% Wp = 1000*eye(12);
% Wp(4:6,4:6) = zeros(3,3);
% Wp(10:12,10:12) = zeros(3,3);
Q = zeros(12,12);
Q(1:3,1:3) = 1*eye(3);
Q(4:6,4:6) = 1e-2*eye(3);
Q(7:9,7:9) = 1*eye(3);
Q(10:12,10:12) = 1e-2*eye(3);

R = 0.0*eye(4);
Wp = 1000*eye(12);
Wp(4:6,4:6) = zeros(3,3);
Wp(10:12,10:12) = zeros(3,3);

rho = 200;
% rho = 2;

dx = x - xbar;
du = u - ubar;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;
% L = dx'*Q*dx + du'*R*du;