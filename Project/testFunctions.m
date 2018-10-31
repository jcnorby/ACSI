clear;clc;close all;

% Initialize horizon
N = 101;
T = 2;
dt = T/(N-1);

% Refresh symbolic functions
% testFunctionsSymbolic
% computeLinearizationSymbolic(dt)

q0 = zeros(6,1);
dq0 = [0;0;0;0;0;0];
u = [0;0;0;0;0;0];

x0 = [q0;dq0];
xf = [1;1;1;0;0;0;
    0;0;0;0;0;0];

Q = 1e3*eye(length(x0));
R = eye(length(u));
A = compute_A(x0,[]);
B = compute_B(x0,[]);
[K_lqr,S] = dlqr(A,B,Q,R);

for ii = 1:N
    u_ff(:,ii) = u;
    K(:,:,ii) = K_lqr;
end

[x_bar,u_bar] = forwardInt(x0, u_ff, K, N,dt, xf);

tic
[x_bar,K,u_ff] = slqSolve(x_bar,u_bar,N,dt,x0);
toc

x = x_bar';

quad_w = 0.1;
quad_l = 0.1;
quad_h = 0.05;
plot3(xf(1), xf(2), xf(3), 'o', 'MarkerSize', 10)
h = animatedline;
epsilon = 0.1;
axis equal
axis([min(x(:,1))-epsilon max(x(:,1))+epsilon min(x(:,2))-epsilon max(x(:,2))+epsilon min(x(:,3))-epsilon max(x(:,3))+epsilon]);
axis([-1.5 1.5 -1.5 1.5 -1.5 1.5])
xlabel('x')
ylabel('y')
zlabel('z')
quadrotor = [];
grid on

for ii = 1:N+1
    a = tic;
    addpoints(h,x(ii,1),x(ii,2),x(ii,3));
    drawnow limitrate
    delete(quadrotor) % Comment out to save snapshots
    quadrotor = plotrotcube([quad_w quad_l quad_h],[x(ii,1) - quad_w/2,x(ii,2)- quad_l/2,x(ii,3)- quad_h/2],.8,[1 0 0], x(ii,4),x(ii,5),x(ii,6));
    pause(dt - toc(a));
end
