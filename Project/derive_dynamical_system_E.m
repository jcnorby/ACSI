% Generate function handles for the linearized quad rotor system without
% PID control

syms x y z dx dy dz ddx ddy ddz phi theta psi dphi dtheta dpsi ddphi ddtheta ddpsi m g Ixx Iyy Izz A 'real'

syms T tauphi tautheta taupsi real
taub = [tauphi tautheta taupsi]';
u = [T;taub];

% syms omega1 omega2 omega3 omega4 real
% omega = [omega1 omega2 omega3 omega4]';
% [T, taub] = omega2thrustfunc(omega);
% tauphi = taub(1);
% tautheta = taub(2);
% taupsi = taub(3);
% u = omega;

% Parameters
g = 9.81;       % m/s^2
m = 0.027;      % kg
l = 0.046;      % m
k = 2.2e-8;  % N m s^2
b = 2e-9;       % N s^2
Im = 3e-6;    % kg*m^2
Ixx = 1.66e-5;    % kg*m^2
Iyy = 1.66e-5;    % kg*m^2
Izz = 2.93e-5;   % kg*m^2
A = [0.92e-6;      % kg/s
	 0.91e-6;      % kg/s
	 1.03e-6];     % kg/s
 
% Gravity acceleration
Ga = -g * [0; 0; 1];

r = [x;y;z];
rdot = [dx;dy;dz];
rddot = [ddx;ddy;ddz];
eta = [phi;theta;psi];
etadot = [dphi;dtheta;dpsi];
etaddot = [ddphi;ddtheta;ddpsi];
% Thrust acceleration
angM = [cos(psi)*sin(theta)*cos(phi) + sin(psi)*sin(phi);
      sin(psi)*sin(theta)*cos(phi) - cos(psi)*sin(phi);
      cos(theta)*cos(phi)];

Ta = T/m * angM;

% Drag
Aa = -1/m .* A .* rdot;

Sphi = sin(phi); Stheta = sin(theta); Spsi = sin(psi);
Cphi = cos(phi); Ctheta = cos(theta); Cpsi = cos(psi);

C11 = 0;
C12 = (Iyy - Izz) * (dtheta*Cphi*Sphi + dpsi*Sphi^2*Ctheta) + (Izz - Iyy)*dpsi*Cphi^2*Ctheta - Ixx*dpsi*Ctheta;
C13 = (Izz - Iyy) * dpsi*Cphi*Sphi*Ctheta^2;
C21 = (Izz - Iyy) * (dtheta*Cphi*Sphi + dpsi*Sphi*Ctheta) + (Iyy - Izz)*dpsi*Cphi^2*Ctheta - Ixx*dpsi*Ctheta;
C22 = (Izz - Iyy) * dphi*Cphi*Sphi;
C23 = -Ixx * dpsi * Stheta * Ctheta + Iyy * dpsi * Sphi^2 * Stheta * Ctheta + Izz * dpsi * Cphi^2 * Stheta * Ctheta;
C31 = (Iyy - Izz) * dpsi * Ctheta^2 * Sphi * Cphi - Ixx * dtheta * Ctheta;
C32 = (Izz - Iyy) * (dtheta * Cphi * Sphi * Stheta + dphi * Sphi^2 * Ctheta) + (Iyy - Izz) * dphi * Cphi^2 * Ctheta...
        + Ixx * dpsi * Stheta * Ctheta - Iyy * dpsi * Sphi^2 * Stheta * Ctheta - Izz * psi * Cphi^2 * Stheta * Ctheta;
C33 = (Iyy - Izz) * dphi * Cphi * Sphi * Ctheta^2 - Iyy * dtheta * Sphi^2 * Ctheta * Stheta ...
        - Izz * dtheta * Cphi^2 * Ctheta * Stheta + Ixx * dtheta * Ctheta * Stheta;

C = [C11 C12 C13; C21 C22 C23; C31 C32 C33];    

J11 = Ixx; J12 = 0; J13 = -Ixx*Stheta;
J21 = 0;
J22 = Iyy * Cphi^2 + Izz * Sphi^2;
J23 = (Iyy - Izz) * Cphi * Sphi * Ctheta;
J31 = -Ixx * Stheta;
J32 = (Iyy - Izz)*Cphi*Sphi*Ctheta;
J33 = Ixx * Stheta^2 + Iyy * Sphi^2 * Ctheta^2 + Izz * Cphi^2*Ctheta^2;
J = [J11 J12 J13; J21 J22 J23; J31 J32 J33];  

z = [r;eta;rdot;etadot];

f = [rdot;
     etadot;
     -1/m .* A.* rdot + T/m * angM - [0;0;g];
     J\(taub - C*etadot)];

A13 = zeros(12,3);
A2 = [eye(3);-(1/m).*A.*eye(3);zeros(6,3)];
A4 = [zeros(6,3);eye(3);-J\C];
Ac = [A13, A2, A13, A4];

B1 = [zeros(3,1); 1/m .* angM; zeros(6,1)];
B2 = [zeros(9,3); inv(J)];
Bc = [B1, B2];

Gc = [zeros(5,1); -g; zeros(6,1)];

Amat = jacobian(f,z);
Bmat = jacobian(f,u);

%Write the non-linear dynamics to a file
matlabFunction(f ,'file','getDynSys.m','vars',{z, u},'outputs',{'dstates'});

%Write the non-linear dynamical matrices to a file
matlabFunction(Ac, Bc, Gc,'file','getDynMat.m','vars',{z},'outputs',{'Ac','Bc','Gc'});

%Write the linearized dynamics to a file
matlabFunction(Amat,Bmat,'file','getLinSys.m','vars',{z, u},'outputs',{'Amat','Bmat'});
