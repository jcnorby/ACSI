function [K,l] = ricattiSolve(qTraj,uTraj,Q,R,N)

q_vec = zeros(12,1);
r = ones(6,1);

p(:,:,N+1) = ones(12,1);
P(:,:,N+1) = Q;
for k = N:-1:1
    q = qTraj(k,:)';
    u = uTraj(k,:)';
    A = computeA(q,u);
    B = computeB(q,u);
    H = R + B'*P(:,:,k+1)*B;
    G = B'*P(:,:,k+1)*A;
    K(:,:,k) = -inv(H)*G;
    
    g = r + B'*p(k+1);
    l(:,:,k) = -inv(H)*g;
    
    P(:,:,k) = Q + A'*P(:,:,k+1)*A + K(k)'*H*K(:,:,k) + K(:,:,k)'*G + G'*K(:,:,k);
    p(:,:,k) = q_vec + A'*p(:,:,k+1) + K(:,:,k)'*H*l(:,:,k) + l(:,:,k)'*g + G'*l(:,:,k);
end


K = [];
l = [];