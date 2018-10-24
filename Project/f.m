function qnew = f(q,u,T)
dq = dynamics(q,u);
qnew = q + dq*T;