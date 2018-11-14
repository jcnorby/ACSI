function [t,x] = forwardIntMPC(x0, N, dt, t_wp, xf, u_ff, K, simN)
x = x0;
t = zeros(N,1)
for ii = 1:simN
    t(ii)
    x(:,ii+1) = f_mpc(t(ii), x(:,ii), N, dt, t_wp, xf, u_ff, K);
    
    t(ii+1) = t(ii) + dt;
end