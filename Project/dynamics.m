function dq = dynamics(q,u)
dq = q - q; % hack to get column vector of zeros of correct type

dq(1:6) = q(7:12);
dq(7:12) = u;
dq(9) = dq(9) - 10*exp(-(q(1)^2 + q(2)^2));

dq = reshape(dq, size(q));