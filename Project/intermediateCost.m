function L = intermediateCost(t,x,u,xbar,ubar,x_wp, t_wp)

Q = 10*eye(12);
% Q(7:9,7:9) = 0*eye(3);
% Q(10:12,10:12) = 0*eye(3);
% xbar = [1;1;1;0;0;0
%     0;0;0;0;0;0];

R = 50000*eye(4);
% ubar = [0;0;0;0];

Wp = 10000*eye(12);
Wp(4:6,4:6) = 100*eye(3);
Wp(7:9,7:9) = 100*eye(3);
Wp(10:12,10:12) = zeros(3,3);

rho = 200;

dx = x - xbar;
du = u - ubar;

xhat = x - x_wp;
W = xhat'*Wp*xhat*sqrt(rho/(2*pi))*exp(-rho/2*(t - t_wp)^2);

L = dx'*Q*dx + du'*R*du + W;