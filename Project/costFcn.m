function J = costFcn(x,u)
xGoal = [1,1,1];
J = sum((x(end,1:3) - xGoal).^2 ) + norm(u);