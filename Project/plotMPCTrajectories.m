clear;clc;close all;
set(0,'DefaultFigureColor', [1,1,1])
set(0,'defaulttextinterpreter', 'latex')
set(0,'defaultaxesticklabelinterpreter', 'latex')
set(0,'defaultaxesfontsize', 20)

a = dir('Successful_Data\MPC_Trajectories\*.mat');
numTrajectories = numel(a);
dt = 0.02;

for ii = 1:numTrajectories
    
    filename = ['Successful_Data\MPC_Trajectories\trajData_1_10-Dec-2018 16_34_15_',num2str(ii-1),'.mat'];
    
    temp = load(filename);
    x = temp.xtraj;
    t_wp = temp.t_wp;
    xf = [0;-1.5;2;0;0;0
        0;0;0;0;0;0];
    x_wp = temp.x_wp;
    
    plot3(x(1,:),x(2,:),x(3,:), 'k-'); hold on
    i_wp = floor(t_wp/dt) + 1;
    % h_wp = plot3(x_wp(1,i_wp), x_wp(2,i_wp), x_wp(3,i_wp), 'og', 'MarkerSize', 20, 'LineWidth', 3); hold on
    
    % viscircles([0,0], 0.44)
    plotCircle3D([x_wp(1,i_wp), x_wp(2,i_wp), x_wp(3,i_wp)],[0 1 0],0.44)
    
    plot3(xf(1), xf(2), xf(3), 'ob', 'MarkerSize', 20, 'LineWidth', 2);
    axis equal
    
end

legend('Planned trajectories', 'Estimated hoop position', 'Goal state', 'location', 'northeast')

xlabel('x (m)')
ylabel('y (m)')
zlabel('z (m)')