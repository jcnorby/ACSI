function L = intermediateCost(x,u)

Q = 0.1*eye(12);
R = 0.5*eye(6);

% x_bar = [1;1;1;0;0;0;
%     0;0;0;0;0;0];
% u_bar = [0;0;0;0;0;0];
% 
% dx = x - x_bar;
% du = u - u_bar;

% dx = x;
% du = u;

L = x'*Q*x + u'*R*u;