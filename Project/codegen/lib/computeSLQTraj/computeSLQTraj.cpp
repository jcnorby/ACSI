//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: computeSLQTraj.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "f.h"
#include "slqSolve.h"
#include "computeSLQTraj_emxutil.h"

// Function Definitions

//
// % Initialize controller with LQR solution
//  Q = 1e3*eye(length(x0));
//  R = eye(length(u));
//  A = compute_A(x0,u0);
//  B = compute_B(x0,u0);
//  [K_lqr,S] = dlqr(A,B,Q,R);
//  save('loadK;', 'K_lqr');
// Arguments    : double N
//                double dt
//                const double x0[12]
//                const double xf[12]
//                double t_wp
//                const double x_wp[3612]
//                emxArray_real_T *x
//                emxArray_real_T *K
//                emxArray_real_T *u
// Return Type  : void
//
void computeSLQTraj(double N, double dt, const double x0[12], const double xf[12],
                    double t_wp, const double x_wp[3612], emxArray_real_T *x,
                    emxArray_real_T *K, emxArray_real_T *u)
{
  emxArray_int8_T *u_ff;
  int i0;
  int loop_ub;
  int i1;
  static const double K_lqr[48] = { -0.0, 0.0, 1.6111, 0.0, 0.0, -1.6111, 0.0,
    -0.0, 2.6672, 0.0, 0.0, 0.0, 0.0, 9.2114, 0.0, 0.0, -0.0, 0.0, 9.2114, 0.0,
    0.0, 0.0, 0.0, 2.8908, -0.0, 0.0, 2.379, 0.0, 0.0, -2.379, 0.0, -0.0, 2.7075,
    0.0, 0.0, 0.0, 0.0, 1.7455, 0.0, 0.0, -0.0, 0.0, 1.7455, 0.0, 0.0, 0.0, 0.0,
    2.9344 };

  emxArray_real_T *u_fb;
  double b_x[12];
  double b_K[48];
  emxInit_int8_T(&u_ff, 2);

  //  temp = load('loadK');
  //  K_lqr = temp.K_lqr;
  i0 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  u_ff->size[1] = (int)N;
  emxEnsureCapacity_int8_T(u_ff, i0);
  loop_ub = (int)N << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_ff->data[i0] = 0;
  }

  i0 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  K->size[2] = (int)(N - 1.0);
  emxEnsureCapacity_real_T(K, i0);
  loop_ub = 48 * (int)(N - 1.0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    K->data[i0] = 0.0;
  }

  //  From loadK:
  for (loop_ub = 0; loop_ub < (int)(N - 1.0); loop_ub++) {
    for (i0 = 0; i0 < 4; i0++) {
      u_ff->data[i0 + u_ff->size[0] * loop_ub] = 0;
    }

    for (i0 = 0; i0 < 12; i0++) {
      for (i1 = 0; i1 < 4; i1++) {
        K->data[(i1 + K->size[0] * i0) + K->size[0] * K->size[1] * loop_ub] =
          K_lqr[i1 + (i0 << 2)];
      }
    }
  }

  //  Forward simulate to get initial trajectory
  i0 = x->size[0] * x->size[1];
  x->size[0] = 12;
  x->size[1] = (int)N;
  emxEnsureCapacity_real_T1(x, i0);
  loop_ub = 12 * (int)N;
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = 0.0;
  }

  i0 = u->size[0] * u->size[1];
  u->size[0] = 4;
  u->size[1] = (int)(N - 1.0);
  emxEnsureCapacity_real_T1(u, i0);
  loop_ub = (int)(N - 1.0) << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u->data[i0] = 0.0;
  }

  emxInit_real_T(&u_fb, 2);
  i0 = u_fb->size[0] * u_fb->size[1];
  u_fb->size[0] = 4;
  u_fb->size[1] = (int)(N - 1.0);
  emxEnsureCapacity_real_T1(u_fb, i0);
  loop_ub = (int)(N - 1.0) << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_fb->data[i0] = 0.0;
  }

  for (i0 = 0; i0 < 12; i0++) {
    x->data[i0] = x0[i0];
  }

  for (loop_ub = 0; loop_ub < (int)(N - 1.0); loop_ub++) {
    for (i0 = 0; i0 < 12; i0++) {
      for (i1 = 0; i1 < 4; i1++) {
        b_K[i1 + (i0 << 2)] = -K->data[(i1 + K->size[0] * i0) + K->size[0] *
          K->size[1] * loop_ub];
      }
    }

    for (i0 = 0; i0 < 12; i0++) {
      b_x[i0] = x->data[i0 + x->size[0] * loop_ub] - xf[i0];
    }

    for (i0 = 0; i0 < 4; i0++) {
      u_fb->data[i0 + u_fb->size[0] * loop_ub] = 0.0;
      for (i1 = 0; i1 < 12; i1++) {
        u_fb->data[i0 + u_fb->size[0] * loop_ub] += b_K[i0 + (i1 << 2)] * b_x[i1];
      }
    }

    for (i0 = 0; i0 < 4; i0++) {
      u->data[i0 + u->size[0] * loop_ub] = (double)u_ff->data[i0 + u_ff->size[0]
        * loop_ub] + u_fb->data[i0 + u_fb->size[0] * loop_ub];
    }

    for (i0 = 0; i0 < 12; i0++) {
      b_x[i0] = x->data[i0 + x->size[0] * loop_ub];
    }

    f(b_x, *(double (*)[4])&u->data[u->size[0] * loop_ub], dt, *(double (*)[12])
      &x->data[x->size[0] * ((int)((1.0 + (double)loop_ub) + 1.0) - 1)]);
  }

  emxFree_real_T(&u_fb);
  emxFree_int8_T(&u_ff);

  //  Execute SLQ solve to generate optimal trajectory and control
  slqSolve(x, u, N, dt, x0, x_wp, t_wp, xf, K);
}

//
// File trailer for computeSLQTraj.cpp
//
// [EOF]
//
