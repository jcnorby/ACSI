function [x_bar,K,u_bar] = slqSolve(x_bar,u_bar,N,dt,x0, x_wp,t_wp, xf)

% Initialize with arbitrary u_ff above convergence bound
u_ff = ones(size(u_bar));

ii = 1;
while (norm(u_ff)>=1e-6) && ii<6 % Stop if feedforward increment converges
    
    % Initialize S matrix (coefficients of quadratic functional)
    s(N) = compute_qN(x_bar(:,N), xf);
    s_vec(:,N) = compute_qN_vec(x_bar(:,N), xf);
    S_mat(:,:,N) = compute_QN_mat(x_bar(:,N), xf);
    
    % Initialize time
    t = (N-1)*dt;
    
    % Backward propagation
    for k = (N-1):-1:1
        
        % Update time
        t = t-dt;
        
        % Select current state and control vectors
        xn = x_bar(:,k);
        un = u_bar(:,k);
        
        % Compute linearized dynamics
        A = compute_A(xn,un);
        B = compute_B(xn,un);
        
        % Compute cost weighting terms
        q = compute_q(t,xn,un,xn,un,x_wp(:,k),t_wp);
        q_vec = compute_q_vec(t,xn,un,xn,un,x_wp(:,k),t_wp);
        Q_mat = compute_Q_mat(t,xn,un,xn,un,x_wp(:,k),t_wp);
        P = compute_P(t,xn,un,xn,un,x_wp(:,k),t_wp);
        r = compute_r_vec(t,xn,un,xn,un,x_wp(:,k),t_wp);
        R = compute_R_mat(t,xn,un,xn,un,x_wp(:,k),t_wp);
        
        % Compute grouping terms
        g = r + B'*s_vec(:,k+1);
        G = P + B'*S_mat(:,:,k+1)*A;
        H = R + B'*S_mat(:,:,k+1)*B;
        
        % Update feedback matrix and feedforward control
        K(:,:,k) = -inv(H)*G;
        u_ff(:,k) = -inv(H)*g;
        
        % Update current coefficients of functional
        S_mat(:,:,k) = Q_mat + A'*S_mat(:,:,k+1)*A + K(:,:,k)'*H*K(:,:,k) + K(:,:,k)'*G + G'*K(:,:,k);
        s_vec(:,k) = q_vec + A'*s_vec(:,k+1) + K(:,:,k)'*H*u_ff(:,k) + K(:,:,k)'*g + G'*u_ff(:,k);
        s(k) = q + s(k+1) + 0.5*u_ff(:,k)'*H*u_ff(:,k) + u_ff(:,k)'*g;
        
%         S_mat(:,:,k)
%         s_vec(:,k)
%         s(k)
    end
    
    
    [x_bar,u_bar] = forwardIntTraj(x0,x_bar,u_bar, u_ff, K, N,dt);
    
%     J = terminalCost(x_bar(:,end), xf);
%     t = 0;
%     for k = 1:N-1
%         J = J + intermediateCost(t,x_bar(:,k),u_bar(:,k),x_bar(:,k),u_bar(:,k), x_wp(:,k),t_wp);
%         t = t+dt;
%     end
%     J
    
    % Update algorithm iteration
    ii = ii+1;
end