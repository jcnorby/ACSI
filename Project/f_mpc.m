function xnew = f_mpc(t, x, N, dt, t_wp, xf, u_ff, K)
dx = mpcDynamics(t,x,N,dt,t_wp,xf,u_ff,K);
xnew = x + dx*dt;