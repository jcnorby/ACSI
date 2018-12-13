function ax = plotTrajFcn(x,u,xf,t_wp,x_wp,dt,N,T,success)

set(0,'DefaultFigureColor', [1,1,1])
set(0,'defaulttextinterpreter', 'latex')
set(0,'defaultaxesticklabelinterpreter', 'latex')
set(0,'defaultaxesfontsize', 20)



% Initialize plotting
quad_w = 0.092;
quad_l = 0.092;
quad_h = 0.029;
h = animatedline;
epsilon = 0.3;

quadrotor = [];
h_wp = [];
thrust = [];

% while(1)
%     t = 0;
%     for ii = 1:N-1
%         a = tic;
%
%         thrustVec = (eul2rotm(flipud(x(4:6,ii))'))*[0;0;u(1,ii)];
%
%         u_ff = [2*180/pi;2*180/pi;125170].*thrustVec;
%
%         addpoints(h,x(1,ii),x(2,ii),x(3,ii));
%         delete(quadrotor) % Comment out to save snapshots
%         delete(h_wp) %
%         delete(thrust);
%         quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,ii) - quad_w/2,x(2,ii)- quad_l/2,x(3,ii)- quad_h/2],.8,[1 0 0], x(4,ii),x(5,ii),x(6,ii));
%         %         quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,ii) - quad_w/2,x(2,ii)- quad_l/2,x(3,ii)- quad_h/2],.8,[1 0 0],pi/6,pi/6,pi/6);
%         thrust = quiver3(x(1,ii),x(2,ii),x(3,ii),thrustVec(1),thrustVec(2),thrustVec(3), '-b', 'LineWidth', 1,  'MaxHeadSize', 2, 'AutoScaleFactor', 2);
%         if t < t_wp || T - t < 0.2
%             h_wp = plot3(x_wp(1,ii), x_wp(2,ii), x_wp(3,ii), 'or', 'MarkerSize', 20, 'LineWidth', 3);
%         else
%             h_wp = plot3(x_wp(1,ii), x_wp(2,ii), x_wp(3,ii), 'og', 'MarkerSize', 20, 'LineWidth', 3);
%         end
%         title(sprintf('Time elapsed = %4.2f s.', t))
% %         drawnow limitrate
%         t = t+dt;
% %         pause(dt - toc(a));
%     end
%     clearpoints(h);
% end

trajectory = plot3(x(1,:),x(2,:),x(3,:), 'k-'); hold on
index_wp = floor(t_wp/dt) + 1;

if success
    h_wp = plot3(x_wp(1,index_wp), x_wp(2,index_wp), x_wp(3,index_wp), 'og', 'MarkerSize', 20, 'LineWidth', 3);
else
    h_wp = plot3(x_wp(1,index_wp), x_wp(2,index_wp), x_wp(3,index_wp), 'or', 'MarkerSize', 20, 'LineWidth', 3);
end

quadSnapshots = floor(linspace(1,N,10));

for i = 1:length(quadSnapshots)
    
    quadrotor = plotrotcube([quad_w quad_l quad_h],[x(1,quadSnapshots(i)) - quad_w/2,...
        x(2,quadSnapshots(i))- quad_l/2,x(3,quadSnapshots(i))- quad_h/2],...
        .8,[1 0 0], x(4,quadSnapshots(i)),x(5,quadSnapshots(i)),x(6,quadSnapshots(i))); hold on
    
end
goal = plot3(xf(1), xf(2), xf(3), 'ob', 'MarkerSize', 20, 'LineWidth', 3);

axis equal
axis([min(x(1,:))-epsilon max(x(1,:))+epsilon min(x(2,:))-epsilon max(x(2,:))+epsilon min(x(3,:))-epsilon max(max(x_wp(3,:)), max(x(3,:)))+epsilon]);
xlabel('x (m)')
ylabel('y (m)')
zlabel('z (m)')

if ~success
    legend([quadrotor(1), trajectory, h_wp, goal],'Quadrotor','Trajectory', 'Hoop position', 'Goal state', 'location', 'northeast')
end
ax = gca;
