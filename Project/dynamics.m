function dq = dynamics(q,u)
dq = zeros(12,1); % q - q: hack to get column vector of zeros of correct type

dq(1:6) = q(7:12);
dq(7:12) = u;
dq(9) = dq(9) - 9.81;

dq = reshape(dq, size(q));