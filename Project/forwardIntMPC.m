function [t,x] = forwardIntMPC(x0, N, dt, t_wp, xf, u_ff, K, simN)
x = x0;
t = zeros(N,1);
T = (simN-1)*dt;
for ii = 1:simN
    t(ii)
    x(:,ii+1) = f_mpc(t(ii), x(:,ii), N, dt, t_wp, xf, u_ff, K);
    
    t(ii+1) = t(ii) + dt;
    N = round((T-t(ii))/dt);
    N = max(N,10);
end