clear;clc;close all;

% Initialize horizon
N = 100;
dt = 0.01;

q0 = zeros(6,1);
dq0 = [0;0;0;0;0;0];
u = [0;0;0;0;0;0];

x0 = [q0;dq0];
xf = [1;1;1;0;0;0;
    0;0;0;0;0;0];

Q = eye(length(x0));
R = eye(length(u));
A = computeA(x0,[]);
B = computeB(x0,[]);
[K_lqr,S] = lqr(A,B,Q,R);

for ii = 1:N
    u_ff(:,ii) = u;
    K(:,:,ii) = K_lqr;
end

[x,u] = forwardInt(x0, u_ff, K, N,dt);

tic
[x,K,u_ff] = slqSolve(x,u,N,dt,x0);
toc

x = x';
u = u';

quad_w = 0.1;
quad_l = 0.1;
quad_h = 0.05;
plot3(xf(1), xf(2), xf(3), 'o')
h = animatedline;
epsilon = 0.1;
axis equal
axis([min(x(:,1))-epsilon max(x(:,1))+epsilon min(x(:,2))-epsilon max(x(:,2))+epsilon min(x(:,3))-epsilon max(x(:,3))+epsilon]);
axis([-2 2 -2 2 -2 2])
xlabel('x')
ylabel('y')
zlabel('z')
quadrotor = [];

for ii = 1:N+1
    a = tic;
    addpoints(h,x(ii,1),x(ii,2),x(ii,3));
    drawnow
    delete(quadrotor) % Comment out to save snapshots
    quadrotor = plotrotcube([quad_w quad_l quad_h],[x(ii,1) - quad_w/2,x(ii,2)- quad_l/2,x(ii,3)- quad_h/2],.8,[1 0 0], x(ii,4),x(ii,5),x(ii,6));
    pause(dt - toc(a));
end
