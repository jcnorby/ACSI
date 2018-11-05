function [T, tau]= omega2thrustfunc(omega)
%#codegen
l = 0.046;      % m
k = 2.2e-8;  % N m s^2
b = 2e-9;       % N s^2
omegasq = omega.^2;
Mw = [k   , k   , k  , k  ;
      -k*l/sqrt(2), -k*l/sqrt(2), k*l/sqrt(2), k*l/sqrt(2);
      -k*l/sqrt(2), k*l/sqrt(2), k*l/sqrt(2), -k*l/sqrt(2);
      -b  , b   , -b , b  ];
Tbar = Mw*omegasq;
T = Tbar(1);
tau = Tbar(2:4);
