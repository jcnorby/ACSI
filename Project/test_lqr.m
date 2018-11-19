function K = test_lqr(A,B)
Q = eye(2);
R = zeros(1,1)+0.1;

K = lqr(A,B,Q,R);