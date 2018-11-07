function xnew = f_mpc(t,x,N,dt,t_wp,xf,u_ff,K)
T = (N-1)*dt;

dx = mpcDynamics(t,x,N,dt,t_wp,xf,u_ff,K);
xnew = x + dx*dt;