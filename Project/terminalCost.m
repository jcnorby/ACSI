function L = terminalCost(x,u)

H = 10000*eye(12);

x_des = [1;1;1;0;0;0;
    0;0;0;0;0;0];

dx = x - x_des;

L = dx'*H*dx;