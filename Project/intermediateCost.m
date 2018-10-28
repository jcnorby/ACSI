function L = intermediateCost(x,u)

Q = eye(12);
R = eye(6);

x_bar = [1;1;1;0;0;0;
    0;0;0;0;0;0];
u_bar = [0;0;0;0;0;0];

dx = x - x_bar;
du = u - u_bar;

L = dx'*Q*dx + du'*R*du;