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
t_wp = 1;
for i = 1:N
%         x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0;
%             1;1;0;0;0;0];
        x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0;
            1;1;0;0;0;0];
    t = t+dt;
    
    if abs(t - t_wp)<1e-4
        i_wp = i;
    end
end

g = 9.81;       % m/s^2
m = 0.027;      % kg
u0 = [m*g;0;0;0];

a = tic;
[x,K,u] = computeSLQTraj_mex(N,dt,x0,xf,t_wp,x_wp);
% [x,K,u] = computeSLQTraj(N,dt,x0,xf,t_wp,x_wp);
disp(['Trajectory computed in ', num2str(toc(a)), 's.'])

animateTraj(x,xf,t_wp,x_wp,dt,N,T)

