function L = terminalCost(x,xf)

H = 10000*eye(12);

% x_des = [1;1;1;0;0;0;
%     0;0;0;0;0;0];

dx = x - xf;

L = dx'*H*dx;