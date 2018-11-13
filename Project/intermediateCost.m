function L = intermediateCost(t,x,u,xbar,ubar,x_wp, t_wp)

% Q = 1*eye(12);
% R = 0.5*eye(4);
% Wp = 1000*eye(12);
% Wp(4:6,4:6) = zeros(3,3);
% Wp(10:12,10:12) = zeros(3,3);
Q = zeros(12,12);
% Q(1:3,1:3) = 1e3*eye(3);
% Q(4:6,4:6) = 1e2*eye(3);
% Q(7:9,7:9) = 1e3*eye(3);
% Q(10:12,10:12) = 1e2*eye(3);
Q = 10*eye(12);
Q(7:9,7:9) = 0*eye(3);
Q(10:12,10:12) = 0*eye(3);

R = 0.1*eye(4);
Wp = 1000*eye(12);
Wp(4:6,4:6) = zeros(3,3);
Wp(7:9,7:9) = 100*eye(3);
Wp(10:12,10:12) = zeros(3,3);

rho = 20;
% rho = 2;

xbar = [1;1;1;0;0;0
    0;0;0;0;0;0];

% xbar = x_wp;

dx = x - xbar;
du = u - ubar;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;