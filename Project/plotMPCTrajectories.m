clear;clc;close all;
set(0,'DefaultFigureColor', [1,1,1])
set(0,'defaulttextinterpreter', 'latex')
set(0,'defaultaxesticklabelinterpreter', 'latex')
set(0,'defaultaxesfontsize', 20)

a = dir('Successful_Data\MPC_Trajectories\*.mat');
numTrajectories = numel(a);
dt = 0.02;

quad_w = 0.092;
quad_l = 0.092;
quad_h = 0.029;

quadSnapshots = linspace(1:N:10);

for ii = 1:numTrajectories
    
    filename = ['Successful_Data\MPC_Trajectories\trajData_1_10-Dec-2018 16_34_15_',num2str(ii-1),'.mat'];
    
    temp = load(filename);
    x = temp.xtraj;
    t_wp = temp.t_wp;
    xf = [0;-1.5;2;0;0;0
        0;0;0;0;0;0];
    x_wp = temp.x_wp;
    
    quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,quadSnapshots) - quad_w/2,x(2,quadSnapshots)- quad_l/2,x(3,quadSnapshots)- quad_h/2],.8,[1 0 0], x(4,quadSnapshots),x(5,quadSnapshots),x(6,quadSnapshots)); hold on
    
    trajectory = plot3(x(1,:),x(2,:),x(3,:), 'k-'); hold on;
    i_wp = floor(t_wp/dt) + 1;
    % h_wp = plot3(x_wp(1,i_wp), x_wp(2,i_wp), x_wp(3,i_wp), 'og', 'MarkerSize', 20, 'LineWidth', 3); hold on
    
    % viscircles([0,0], 0.44)
    hoop = plotCircle3D([x_wp(1,i_wp), x_wp(2,i_wp), x_wp(3,i_wp)],[0 1 0],0.44); hold on;
    
    goal = plot3(xf(1), xf(2), xf(3), 'ob', 'MarkerSize', 20, 'LineWidth', 2);hold on;
    
%     quadrotor = cad2mat_quad('Crazyflie_assembly_stl_3.stl',x(1,1),x(2,1),x(3,1),x(4,ii),x(5,ii),x(6,ii));
    
    
    axis equal
    
end

legend([quadrotor(1), trajectory, hoop, goal],'Quad state updates','Trajectory updates', 'Predicted hoop position', 'Goal state', 'location', 'northeast')

xlabel('x (m)')
ylabel('y (m)')
zlabel('z (m)')