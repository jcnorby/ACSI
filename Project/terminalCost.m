function L = terminalCost(x,u)

H = eye(12);
R = eye(6);

x_des = [1;1;1;0;0;0;
    0;0;0;0;0;0];
% u_des = [0;0;0;0;0;0];

x_bar = x - x_des;
% u_bar = u - u_des;

L = x_bar'*H*x_bar;