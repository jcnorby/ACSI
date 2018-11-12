function L = terminalCost(x,xf)

H = zeros(12,12);
H(1:3,1:3) = 10000*eye(3);
H(4:6,4:6) = 1e-1*eye(3);
H(7:9,7:9) = 100*eye(3);
H(10:12,10:12) = 1e-1*eye(3);
H = 1*eye(12);
% H = 1e-3*H;

dx = x - xf;

L = dx'*H*dx;
