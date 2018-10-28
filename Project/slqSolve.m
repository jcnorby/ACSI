function [x_bar,K,u_ff] = slqSolve(x_bar,u_bar,N,dt,x0)

% Initialize state weighting matrices
q(N+1) = compute_qN(x_bar(:,N+1));
q_vec(:,N+1) =  compute_qN_vec(x_bar(:,N+1));
Q_mat(:,:,N+1) =  compute_QN_mat(x_bar(:,N+1));

% Initialize S matrix (coefficients of quadratic functional)
s(N+1) = q(N+1);
s_vec(:,N+1) = q_vec(:,N+1);
S_mat(:,:,N+1) = Q_mat(:,:,N+1);

for ii = 1:5
    for k = N:-1:1
        % Select current state and control vectors
        xn = x_bar(:,k);
        un = u_bar(:,k);
        
        % Compute linearized dynamics
        A = computeA(xn,un);
        B = computeB(xn,un);
        
        % Compute cost weighting terms
        q = compute_q(xn,un);
        q_vec = compute_q_vec(xn,un);
        Q_mat = compute_Q_mat(xn,un);
        P = compute_P(xn,un);
        r = compute_r_vec(xn,un);
        R = compute_R_mat(xn,un);
        
        % Compute grouping terms
        g = r + B'*s_vec(:,k+1);
        G = P + B'*S_mat(:,:,k+1)*A;
        H = R + B'*S_mat(:,:,k+1)*B;
        
        % Compute feedback matrix and feedforward control
        K(:,:,k) = -inv(H)*G;
        u_ff(:,k) = -inv(H)*g;
        
        % Compute current coefficients of functional
        S_mat(:,:,k) = Q_mat + A'*S_mat(:,:,k+1)*A + K(:,:,k)'*H*K(:,:,k) + K(:,:,k)'*G + G'*K(:,:,k);
        s_vec(:,k) = q_vec + A'*s_vec(:,k+1) + K(:,:,k)'*H*u_ff(:,k) + K(:,:,k)'*g + G'*u_ff(:,k);
        s(k) = q + s(k+1) + 0.5*u_ff(:,k)'*H*u_ff(:,k) + u_ff(:,k)'*g;
    end
    
    [x_bar,u_bar] = forwardIntTraj(x0,x_bar,u_bar, u_ff, K, N,dt);
    
    J = terminalCost(x_bar(:,end),u_bar(:,end));
    for jj = 1:N
        J = J + intermediateCost(x_bar(:,jj),u_bar(:,jj));
    end
    J
end