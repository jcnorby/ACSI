function [x_bar,K,u_bar] = slqSolve(x_bar,u_bar,umax,N,dt,x0, x_wp,t_wp, xf)

% Initialize with arbitrary u_ff above convergence bound
u_ff = ones(size(u_bar));

s = zeros(N,1);
s_vec = zeros(length(x0),N);
S_mat = zeros(length(x0),length(x0),N);

K = zeros(size(u_bar,1),length(x0),N);

ii = 1;
while (norm(u_ff)>=1e-6) && ii<2 % Stop if feedforward increment converges
    
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
        
%         x_wp = [0;0;0;0;0;0
%             sign(xf(1) - xn(1));0;0;0;0;0];
%         
%         x_wp(1:3) = x0+dx0*t+0.2*[0;0;-9.81]*t^2;
        
        % Compute cost weighting terms
        q = compute_q(t,xn,un,xf,un,x_wp(:,k),t_wp);
        q_vec = compute_q_vec(t,xn,un,xf,un,x_wp(:,k),t_wp);
        Q_mat = compute_Q_mat(t,xn,un,xf,un,x_wp(:,k),t_wp);
        P = compute_P(t,xn,un,xf,un,x_wp(:,k),t_wp);
        r = compute_r_vec(t,xn,un,xf,un,x_wp(:,k),t_wp);
        R = compute_R_mat(t,xn,un,xf,un,x_wp(:,k),t_wp);
        
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
    
    
    [x_bar,u_bar] = forwardIntTraj(x0,x_bar,u_bar, umax,u_ff, K, N,dt);
    
%     J = terminalCost(x_bar(:,end), xf);
%     t = 0;
%     for k = 1:N-1
%         J = J + intermediateCost(t,x_bar(:,k),u_bar(:,k),x_bar(:,k),u_bar(:,k), x_wp(:,k),t_wp);
%         t = t+dt;
%     end
%     J
    
    %     alpha = 1;
    %     Jmin = Inf;
    %     % Forward propagate to generate new trajectory
    %     for i = 1:5
    %         [x_bar_temp,u_bar_temp] = forwardIntTraj(x0,x_bar,u_bar, alpha*u_ff, K, N,dt);
    %
    %         J = terminalCost(x_bar_temp(:,end), xf);
    %         t = 0;
    %         for k = 1:N-1
    %             J = J + intermediateCost(t,x_bar_temp(:,k),u_bar_temp(:,k),x_bar_temp(:,k),u_bar_temp(:,k), x_wp(:,k),t_wp);
    %             t = t+dt;
    %         end
    %
    %         if J < Jmin
    %             Jmin = J;
    %             x_bar = x_bar_temp;
    %             u_bar = u_bar_temp;
    %         end
    %
    %         alpha = alpha/2;
    %
    %     end
    %
    %     Jmin
    
    % Update algorithm iteration
    ii = ii+1;
end