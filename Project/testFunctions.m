clear;clc;close all;

N = 10;
T = 0.1;

x0 = zeros(6,1);
dx0 = [0;1;5;0;0;0];
u = [2;0;0;0;0;0]';

q0 = [x0;dx0];

q = q0';
for ii = 1:N
    u(ii,:) = [2;0;0;0;0;0]';
    q(ii+1,:) = f(q(ii,:)',u(ii,:)',T);
end

Q = eye(length(q));
R = eye(length(u));
H = [];
W = [];
tf = T*(N+1);

% [K,l] = ricattiSolve(q,u,Q,R,N)

h = animatedline;
axis equal
axis([min(q(:,1)) max(q(:,1)) min(q(:,2)) max(q(:,2)) min(q(:,3)) max(q(:,3))])

% a = tic;
% for ii = 1:N+1
%     addpoints(h,q(ii,1),q(ii,2),q(ii,3));
%     drawnow
%     pause(T - toc(a));
%     a = tic;
% end

quad_w = 0.1;
quad_l = 0.1;
quad_h = 0.05;
h = animatedline;
epsilon = 0.1;
axis equal
axis([min(q(:,1))-epsilon max(q(:,1))+epsilon min(q(:,2))-epsilon max(q(:,2))+epsilon min(q(:,3))-epsilon max(q(:,3))+epsilon]);
xlabel('x')
ylabel('y')
zlabel('z')
a = tic; % start timer
a = tic;
quadrotor = [];
for ii = 1:N+1
    addpoints(h,q(ii,1),q(ii,2),q(ii,3));
    drawnow
    delete(quadrotor) % Comment out to save snapshots
    quadrotor = plotrotcube([quad_w quad_l quad_h],[q(ii,1) - quad_w/2,q(ii,2)- quad_l/2,q(ii,3)- quad_h/2],.8,[1 0 0], q(ii,4),q(ii,5),q(ii,6));
    pause(T - toc(a));
    a = tic;
end
