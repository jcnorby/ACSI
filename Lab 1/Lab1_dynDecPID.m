quanser_aero_parameters
% quanser_aero_state_space
A = [0 0 1 0;
    0 0 0 1;
    -Ksp/Jp 0 -Dp/Jp 0;
    0 0 0 -Dy/Jy];

B = [0 0;
    0 0;
    Kpp/Jp Kpy/Jp;
    Kyp/Jy Kyy/Jy];

C = eye(2,4);
D = zeros(2,2);

qSS = ss(A,B,C,D);

%bode(qSS);

qTF = tf(qSS);

[numP,denP] = tfdata(qTF(1,1));
[numY,denY] = tfdata(qTF(2,2));

qTFInv = inv(qTF);

Gs = qTF*qTFInv;

Gdiag = [qTF(1,1) 0; 0 qTF(2,2)];

Kp_pitch = 284.0; %284.052153669146;
Ki_pitch = 50.0; %128.202656695855;
Kd_pitch = 150; %250

Kp_yaw = 15.0; %20.8872979435386;
Ki_yaw = 3.0; %4.85706986591283;
Kd_yaw = 8.0; %15.6681262957778;
s = tf('s');

Kpitch = (Kp_pitch + Ki_pitch/s + Kd_pitch*s)*(100/(s+100));
Kyaw = (Kp_yaw + Ki_yaw/s + Kd_yaw*s)*(100/(s+100));

KD = [Kpitch 0;
        0 Kyaw];

KddTF = qTFInv*Gdiag*KD;

KddSS = ss(KddTF);
Kdd_modal = canon(KddSS,'modal');

Kdd_dis = c2d(KddSS, 0.002,'foh');
Kdd_disModal = canon(Kdd_dis,'modal');
