function qnew = f(q,u,T)
% dq = dynamics(q,u);
dq = getDynSys(q,u);
qnew = q + dq*T;