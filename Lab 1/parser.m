clear 
close all
clc

% file = '9_17_SS_Estimator.mat';
file = '9_17_SS_DerivativeLPF.mat';
load(file);

figure
subplot(2,1,1)
hold on
plot(time, theta)
plot(time, theta_setpt)
xlabel('Time (s)')
xlim([0 50])
ylabel('\theta (rad)')
title('Pitch angle tracking')
hold off

subplot(2,1,2)
hold on
plot(time, psi)
plot(time, psi_setpt)
xlabel('Time (s)')
xlim([0 50])
ylabel('\psi (rad)')
title('Yaw angle tracking')
hold off

figure
subplot(2,1,1)
hold on
plot(time, theta_dot_est)
plot(time, theta_dot_deriv)
xlabel('Time (s)')
xlim([5 10])
ylabel('$\dot{\theta}$ (rad/s)', 'Interpreter','latex')
legend('Estimator','Derivative & LPF')
title('Pitch rate estimate comparison')
hold off

subplot(2,1,2)
hold on
plot(time, psi_dot_est)
plot(time, psi_dot_deriv)
xlabel('Time (s)')
xlim([5 10])
ylabel('$\dot{\psi}$ (rad/s)', 'Interpreter','latex')
legend('Estimator','Derivative & LPF')
title('Yaw rate estimate comparison')
hold off

figure
subplot(2,1,1)
hold on
plot(time, v_pitch_actual)
plot(time, v_pitch_cmd)
legend('Actual','Commanded')
xlabel('Time (s)')
xlim([5 10])
ylabel('Voltage (V)')
title('Pitch angle control inputs')
hold off

subplot(2,1,2)
hold on
plot(time, v_yaw_actual)
plot(time, v_yaw_cmd)
legend('Actual','Commanded')
xlabel('Time (s)')
xlim([5 10])
ylabel('Voltage (V)')
title('Yaw angle control inputs')
hold off