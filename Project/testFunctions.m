clear;clc;close all;
set(0,'DefaultFigureColor', [1,1,1])
set(0,'defaulttextinterpreter', 'latex')
set(0,'defaultaxesticklabelinterpreter', 'latex')
set(0,'defaultaxesfontsize', 20)

% Initialize horizon
N = 301;
T = 3;
dt = T/(N-1);

% Refresh symbolic functions
% testFunctionsSymbolic;
computeLinearizationSymbolic(dt);
clear x_wp

q0 = zeros(6,1);
dq0 = [0;0;0;0;0;0];
u = [0;0;0;0;0;0];

x0 = [q0;dq0];

xf = [1;1;1;0;0;0;
    0;0;0;0;0;0];

t = 0;
t_wp = 1;
for i = 1:N
    %     x_wp(:,i) = [1;0.5;sin(2*pi*t/T);0;0;0;
    %         1;1;0;0;0;0];
    x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0;
        1;1;0;0;0;0];
    t = t+dt;
end

Q = 1e3*eye(length(x0));
R = eye(length(u));
A = compute_A(x0,[]);
B = compute_B(x0,[]);
[K_lqr,S] = dlqr(A,B,Q,R);

for ii = 1:N-1
    u_ff(:,ii) = u;
    K(:,:,ii) = K_lqr;
end

[x_bar,u_bar] = forwardInt(x0, u_ff, K, N,dt, xf);

tic
[x_bar,K,u_ff] = slqSolve(x_bar,u_bar,N,dt,x0, x_wp,t_wp);
toc

x = x_bar';

quad_w = 0.092;
quad_l = 0.092;
quad_h = 0.029;
plot3(xf(1), xf(2), xf(3), 'ob', 'MarkerSize', 20); hold on;
h = animatedline;
% h_wp = animatedline;
epsilon = 0.1;
axis equal
axis([min(x(:,1))-epsilon max(x(:,1))+epsilon min(x(:,2))-epsilon max(x(:,2))+epsilon min(x(:,3))-epsilon max(x(:,3))+epsilon]);
% axis([-1.5 1.5 -1.5 1.5 -1.5 1.5])
xlabel('x')
ylabel('y')
zlabel('z')
quadrotor = [];
h_wp = [];
grid on


while(1)
    t = 0;
    for ii = 1:N
        addpoints(h,x(ii,1),x(ii,2),x(ii,3));
%         addpoints(h_wp,x_wp(1,ii),x_wp(2,ii),x_wp(3,ii), 'or', 'MarkerSize', 20);
        drawnow limitrate
        delete(quadrotor) % Comment out to save snapshots
        delete(h_wp) %
        quadrotor = plotrotcube([quad_w quad_l quad_h],[x(ii,1) - quad_w/2,x(ii,2)- quad_l/2,x(ii,3)- quad_h/2],.8,[1 0 0], x(ii,4),x(ii,5),x(ii,6));
        h_wp = plot3(x_wp(1,ii), x_wp(2,ii), x_wp(3,ii), 'or', 'MarkerSize', 20);
        title(sprintf('Time elapsed = %4.3f s.', t))
        t = t+dt;
        pause(0.01);
    end
    clearpoints(h);
end
