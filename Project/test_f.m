function qnew = test_f(q,T)
% dq = dynamics(q,u);
dq = 1;
qnew = q + dq*T;