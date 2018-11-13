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
% derive_dynamical_system_E
% computeLinearizationSymbolic(dt);
% testFunctionsSymbolic;
clear all

N = 301;
T = 3;
dt = T/(N-1);

% Define initial conditions
q0 = zeros(6,1);
dq0 = [0;0;0;0;0;0];
u = [0;0;0;0];
x0 = [q0;dq0];

% Define final goal position
xf = [1;1;1;0;0;0;
    0;0;0;0;0;0];

% x0 = xf;

% Define waypoint trajectories
t = 0;
t_wp = 1.5;
for i = 1:N
        x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0;
            1;1;0;0;0;0];
%         x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
    t = t+dt;
    
    if abs(t - t_wp)<1e-4
        i_wp = i;
    end
end

g = 9.81;       % m/s^2
m = 0.027;      % kg
u0 = [m*g;0;0;0];

% Initialize controller with LQR solution
Q = 1e3*eye(length(x0));
R = eye(length(u));
A = compute_A(x0,u0);
B = compute_B(x0,u0);
[K_lqr,S] = dlqr(A,B,Q,R);

for ii = 1:N-1
    u_ff(:,ii) = u;
    K(:,:,ii) = K_lqr;
end

% Forward simulate to get initial trajectory
[x_bar,u_bar] = forwardInt(x0, u_ff, K, N,dt, xf);
x = x_bar;

% Execute SLQ solve to generate optimal trajectory and control
a = tic;
[x,K,u_ff] = slqSolve(x_bar,u_bar,N,dt,x0, x_wp,t_wp, xf);
disp(['Trajectory computed in ', num2str(toc(a)), 's.'])

% Initialize plotting
quad_w = 0.092;
quad_l = 0.092;
quad_h = 0.029;
plot3(xf(1), xf(2), xf(3), 'ob', 'MarkerSize', 20, 'LineWidth', 3); hold on;
h = animatedline;
epsilon = 0.4;
axis equal
axis([min(x(1,:))-epsilon max(x(1,:))+epsilon min(x(2,:))-epsilon max(x(2,:))+epsilon min(x(3,:))-epsilon max(x(3,:))+epsilon]);
xlabel('x')
ylabel('y')
zlabel('z')
quadrotor = [];
h_wp = [];
grid on

while(1)
    t = 0;
    for ii = 1:N
        addpoints(h,x(1,ii),x(2,ii),x(3,ii));
        delete(quadrotor) % Comment out to save snapshots
        delete(h_wp) %
        quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,ii) - quad_w/2,x(2,ii)- quad_l/2,x(3,ii)- quad_h/2],.8,[1 0 0], x(4,ii),x(5,ii),x(6,ii));
        %         quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,ii) - quad_w/2,x(2,ii)- quad_l/2,x(3,ii)- quad_h/2],.8,[1 0 0],pi/6,pi/6,pi/6);
        if t < t_wp || T - t < 0.2
            h_wp = plot3(x_wp(1,ii), x_wp(2,ii), x_wp(3,ii), 'or', 'MarkerSize', 20, 'LineWidth', 3);
        else
            h_wp = plot3(x_wp(1,ii), x_wp(2,ii), x_wp(3,ii), 'og', 'MarkerSize', 20, 'LineWidth', 3);
        end
        title(sprintf('Time elapsed = %4.2f s.', t))
        drawnow limitrate
        t = t+dt;
        %         pause(0.05);
    end
    clearpoints(h);
end
