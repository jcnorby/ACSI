//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: slqSolve.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include <cmath>
#include <string.h>
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "slqSolve.h"
#include "inv.h"
#include "compute_A.h"
#include "f.h"
#include "computeSLQTraj_emxutil.h"
#include "compute_qN_vec.h"
#include "norm.h"

// Function Definitions

//
// Initialize with arbitrary u_ff above convergence bound
// Arguments    : emxArray_real_T *x_bar
//                emxArray_real_T *u_bar
//                double N
//                double dt
//                const double x0[12]
//                const double x_wp[3612]
//                double t_wp
//                const double xf[12]
//                emxArray_real_T *K
// Return Type  : void
//
void slqSolve(emxArray_real_T *x_bar, emxArray_real_T *u_bar, double N, double
              dt, const double x0[12], const double x_wp[3612], double t_wp,
              const double xf[12], emxArray_real_T *K)
{
  int i4;
  emxArray_real_T *u_ff;
  int iv0[2];
  int ii;
  emxArray_real_T *s_vec;
  emxArray_real_T *S_mat;
  emxArray_real_T *b_x_bar;
  emxArray_real_T *b_u_bar;
  int i5;
  double t;
  static const int iv1[144] = { 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 };

  int k;
  double A[144];
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t12;
  double t13;
  double t16;
  double t17;
  double c_x_bar[12];
  double t18;
  double t19;
  double b_t2;
  double t23;
  double t24;
  double b_K[48];
  double B[48];
  double b_t4;
  double b_t5;
  double b_t8;
  double c_u_bar[4];
  double dv4[4];
  double H[16];
  double dv5[16];
  int i6;
  double g[4];
  double b_B[48];
  int i7;
  double dv6[16];
  double G[48];
  double c_B[48];
  static const short R[16] = { 2000, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 2000, 0, 0, 0,
    0, 2000 };

  double c_t5[144];
  double b_A[144];
  double c_K[144];
  double d_t5[144];
  double b_G[144];
  double c_A[12];
  double d_K[12];
  double d_x_bar[12];
  for (i4 = 0; i4 < 2; i4++) {
    iv0[i4] = u_bar->size[i4];
  }

  emxInit_real_T(&u_ff, 2);
  i4 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  u_ff->size[1] = iv0[1];
  emxEnsureCapacity_real_T1(u_ff, i4);
  ii = iv0[1] << 2;
  for (i4 = 0; i4 < ii; i4++) {
    u_ff->data[i4] = 1.0;
  }

  emxInit_real_T(&s_vec, 2);
  i4 = s_vec->size[0] * s_vec->size[1];
  s_vec->size[0] = 12;
  s_vec->size[1] = (int)N;
  emxEnsureCapacity_real_T1(s_vec, i4);
  ii = 12 * (int)N;
  for (i4 = 0; i4 < ii; i4++) {
    s_vec->data[i4] = 0.0;
  }

  emxInit_real_T2(&S_mat, 3);
  i4 = S_mat->size[0] * S_mat->size[1] * S_mat->size[2];
  S_mat->size[0] = 12;
  S_mat->size[1] = 12;
  S_mat->size[2] = (int)N;
  emxEnsureCapacity_real_T(S_mat, i4);
  ii = 144 * (int)N;
  for (i4 = 0; i4 < ii; i4++) {
    S_mat->data[i4] = 0.0;
  }

  i4 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  K->size[2] = (int)N;
  emxEnsureCapacity_real_T(K, i4);
  ii = 48 * (int)N;
  for (i4 = 0; i4 < ii; i4++) {
    K->data[i4] = 0.0;
  }

  ii = 1;
  emxInit_real_T(&b_x_bar, 2);
  emxInit_real_T(&b_u_bar, 2);
  while ((norm(u_ff) >= 1.0E-6) && (ii < 2)) {
    //  Stop if feedforward increment converges
    //  Initialize S matrix (coefficients of quadratic functional)
    compute_qN_vec(*(double (*)[12])&x_bar->data[x_bar->size[0] * ((int)N - 1)],
                   xf, *(double (*)[12])&s_vec->data[s_vec->size[0] * ((int)N -
      1)]);
    for (i4 = 0; i4 < 12; i4++) {
      for (i5 = 0; i5 < 12; i5++) {
        S_mat->data[(i5 + S_mat->size[0] * i4) + S_mat->size[0] * S_mat->size[1]
          * ((int)N - 1)] = iv1[i5 + 12 * i4];
      }
    }

    //  Initialize time
    t = (N - 1.0) * dt;

    //  Backward propagation
    i4 = (int)((1.0 + (-1.0 - (N - 1.0))) / -1.0);
    for (ii = 0; ii < i4; ii++) {
      k = ((int)N - ii) - 2;

      //  Update time
      t -= dt;

      //  Select current state and control vectors
      //  Compute linearized dynamics
      compute_A(*(double (*)[12])&x_bar->data[x_bar->size[0] * k], *(double (*)
                 [4])&u_bar->data[u_bar->size[0] * k], A);

      // COMPUTE_B
      //     B = COMPUTE_B(IN1,IN2)
      //     This function was generated by the Symbolic Math Toolbox version 8.1. 
      //     25-Nov-2018 15:44:56
      //  Version 1. Inputs are (q,u).
      t2 = std::cos(x_bar->data[5 + x_bar->size[0] * k]);
      t3 = std::sin(x_bar->data[3 + x_bar->size[0] * k]);
      t4 = std::cos(x_bar->data[3 + x_bar->size[0] * k]);
      t5 = std::sin(x_bar->data[5 + x_bar->size[0] * k]);
      t6 = std::sin(x_bar->data[4 + x_bar->size[0] * k]);
      t7 = std::cos(x_bar->data[4 + x_bar->size[0] * k]);
      t8 = t4 * t4;
      t9 = t3 * t3;
      t10 = t8 * t8;
      t11 = t7 * t7;
      t12 = t9 * t9;
      t13 = t6 * t6;
      t16 = 1.0 / ((t10 + t12) + t8 * t9 * 2.0);
      t17 = 1.0 / (t7 * t7);
      t18 = 1.0 / t7;
      t19 = t3 * t4 * t6 * t16 * t18 * 0.26111271022657179;
      t23 = t16 * t17 * (t6 * t8 * 1.8075799330840252E+35 + t6 * t9 *
                         3.1904874722507191E+35) * 1.8881429367570871E-36;
      t24 = t3 * t4 * t16 * t18 * 0.26111271022657179;
      b_K[0] = 0.0;
      b_K[1] = 0.0;
      b_K[2] = 0.0;
      b_K[3] = 0.0;
      b_K[4] = 0.0;
      b_K[5] = 0.0;
      b_K[6] = t3 * t5 * 0.37037037037037035 + t2 * t4 * t6 *
        0.37037037037037035;
      b_K[7] = t2 * t3 * -0.37037037037037035 + t4 * t5 * t6 *
        0.37037037037037035;
      b_K[8] = t4 * t7 * 0.37037037037037035;
      memset(&b_K[9], 0, 12U * sizeof(double));
      b_K[21] = t16 * t17 * ((((t8 * t13 * 1.8075799330840252E+35 + t10 * t11 *
        3.1904874722507191E+35) + t9 * t13 * 3.1904874722507191E+35) + t11 * t12
        * 3.1904874722507191E+35) + t8 * t9 * t11 * 6.3809749445014382E+35) *
        1.8881429367570871E-36;
      b_K[22] = t19;
      b_K[23] = t23;
      memset(&b_K[24], 0, 9U * sizeof(double));
      b_K[33] = t19;
      b_K[34] = t16 * t18 * (t7 * t8 * 3.1904874722507191E+35 + t7 * t9 *
        1.8075799330840252E+35) * 1.8881429367570871E-36;
      b_K[35] = t24;
      memset(&b_K[36], 0, 9U * sizeof(double));
      b_K[45] = t23;
      b_K[46] = t24;
      b_K[47] = t16 * t17 * (t8 * 1.8075799330840252E+35 + t9 *
        3.1904874722507191E+35) * 1.8881429367570871E-36;
      for (i5 = 0; i5 < 4; i5++) {
        memcpy(&B[i5 * 12], &b_K[i5 * 12], 12U * sizeof(double));
      }

      //  Compute cost weighting terms
      // COMPUTE_Q_VEC
      //     Q_VEC = COMPUTE_Q_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP)
      //     This function was generated by the Symbolic Math Toolbox version 8.1. 
      //     25-Nov-2018 15:45:00
      b_t2 = t - t_wp;
      b_t4 = std::exp(-(b_t2 * b_t2 * 50.0));

      // COMPUTE_Q_MAT
      //     Q = COMPUTE_Q_MAT(T,IN2,IN3,IN4,IN5,IN6,T_WP)
      //     This function was generated by the Symbolic Math Toolbox version 8.1. 
      //     25-Nov-2018 15:45:01
      b_t2 = t - t_wp;
      b_t2 = std::exp(-(b_t2 * b_t2 * 50.0));
      b_t5 = b_t2 * 79788.456080286545;
      b_t8 = b_t2 * 797.88456080286539;

      // COMPUTE_R_VEC
      //     R = COMPUTE_R_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP)
      //     This function was generated by the Symbolic Math Toolbox version 8.1. 
      //     25-Nov-2018 15:45:01
      //  Compute grouping terms
      b_K[0] = 0.0;
      b_K[1] = 0.0;
      b_K[2] = 0.0;
      b_K[3] = 0.0;
      b_K[4] = 0.0;
      b_K[5] = 0.0;
      b_K[6] = t3 * t5 * 0.37037037037037035 + t2 * t4 * t6 *
        0.37037037037037035;
      b_K[7] = t2 * t3 * -0.37037037037037035 + t4 * t5 * t6 *
        0.37037037037037035;
      b_K[8] = t4 * t7 * 0.37037037037037035;
      memset(&b_K[9], 0, 12U * sizeof(double));
      b_K[21] = t16 * t17 * ((((t8 * t13 * 1.8075799330840252E+35 + t10 * t11 *
        3.1904874722507191E+35) + t9 * t13 * 3.1904874722507191E+35) + t11 * t12
        * 3.1904874722507191E+35) + t8 * t9 * t11 * 6.3809749445014382E+35) *
        1.8881429367570871E-36;
      b_K[22] = t19;
      b_K[23] = t23;
      memset(&b_K[24], 0, 9U * sizeof(double));
      b_K[33] = t19;
      b_K[34] = t16 * t18 * (t7 * t8 * 3.1904874722507191E+35 + t7 * t9 *
        1.8075799330840252E+35) * 1.8881429367570871E-36;
      b_K[35] = t24;
      memset(&b_K[36], 0, 9U * sizeof(double));
      b_K[45] = t23;
      b_K[46] = t24;
      b_K[47] = t16 * t17 * (t8 * 1.8075799330840252E+35 + t9 *
        3.1904874722507191E+35) * 1.8881429367570871E-36;
      c_u_bar[0] = u_bar->data[u_bar->size[0] * k] * 2000.0 - u_bar->data
        [u_bar->size[0] * k] * 2000.0;
      c_u_bar[1] = u_bar->data[1 + u_bar->size[0] * k] * 2000.0 - u_bar->data[1
        + u_bar->size[0] * k] * 2000.0;
      c_u_bar[2] = u_bar->data[2 + u_bar->size[0] * k] * 2000.0 - u_bar->data[2
        + u_bar->size[0] * k] * 2000.0;
      c_u_bar[3] = u_bar->data[3 + u_bar->size[0] * k] * 2000.0 - u_bar->data[3
        + u_bar->size[0] * k] * 2000.0;
      for (i5 = 0; i5 < 4; i5++) {
        dv4[i5] = 0.0;
        for (i6 = 0; i6 < 12; i6++) {
          b_t2 = dv4[i5] + b_K[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] *
            (k + 1)];
          b_B[i5 + (i6 << 2)] = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            b_B[i5 + (i6 << 2)] += B[i7 + 12 * i5] * S_mat->data[(i7 +
              S_mat->size[0] * i6) + S_mat->size[0] * S_mat->size[1] * (k + 1)];
          }

          dv4[i5] = b_t2;
        }

        g[i5] = c_u_bar[i5] + dv4[i5];
        for (i6 = 0; i6 < 12; i6++) {
          b_t2 = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            b_t2 += b_B[i5 + (i7 << 2)] * A[i7 + 12 * i6];
          }

          G[i5 + (i6 << 2)] = b_t2;
          c_B[i5 + (i6 << 2)] = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            c_B[i5 + (i6 << 2)] += B[i7 + 12 * i5] * S_mat->data[(i7 +
              S_mat->size[0] * i6) + S_mat->size[0] * S_mat->size[1] * (k + 1)];
          }
        }

        for (i6 = 0; i6 < 4; i6++) {
          b_t2 = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            b_t2 += c_B[i5 + (i7 << 2)] * B[i7 + 12 * i6];
          }

          H[i5 + (i6 << 2)] = (double)R[i5 + (i6 << 2)] + b_t2;
        }
      }

      //  Update feedback matrix and feedforward control
      inv(H, dv5);
      for (i5 = 0; i5 < 4; i5++) {
        for (i6 = 0; i6 < 4; i6++) {
          dv6[i6 + (i5 << 2)] = -dv5[i6 + (i5 << 2)];
        }
      }

      for (i5 = 0; i5 < 4; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * k] = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * k] +=
              dv6[i5 + (i7 << 2)] * G[i7 + (i6 << 2)];
          }
        }
      }

      inv(H, dv5);
      for (i5 = 0; i5 < 4; i5++) {
        for (i6 = 0; i6 < 4; i6++) {
          dv6[i6 + (i5 << 2)] = -dv5[i6 + (i5 << 2)];
        }
      }

      for (i5 = 0; i5 < 4; i5++) {
        u_ff->data[i5 + u_ff->size[0] * k] = 0.0;
        for (i6 = 0; i6 < 4; i6++) {
          u_ff->data[i5 + u_ff->size[0] * k] += dv6[i5 + (i6 << 2)] * g[i6];
        }
      }

      //  Update current coefficients of functional
      c_t5[0] = b_t5 + 20.0;
      memset(&c_t5[1], 0, 12U * sizeof(double));
      c_t5[13] = b_t5 + 20.0;
      memset(&c_t5[14], 0, 12U * sizeof(double));
      c_t5[26] = b_t5 + 20.0;
      memset(&c_t5[27], 0, 12U * sizeof(double));
      c_t5[39] = b_t8 + 20.0;
      memset(&c_t5[40], 0, 12U * sizeof(double));
      c_t5[52] = b_t8 + 20.0;
      memset(&c_t5[53], 0, 12U * sizeof(double));
      c_t5[65] = b_t8 + 20.0;
      memset(&c_t5[66], 0, 12U * sizeof(double));
      c_t5[78] = b_t8 + 20.0;
      memset(&c_t5[79], 0, 12U * sizeof(double));
      c_t5[91] = b_t8 + 20.0;
      memset(&c_t5[92], 0, 12U * sizeof(double));
      c_t5[104] = b_t8 + 20.0;
      memset(&c_t5[105], 0, 12U * sizeof(double));
      c_t5[117] = 20.0;
      memset(&c_t5[118], 0, 12U * sizeof(double));
      c_t5[130] = 20.0;
      memset(&c_t5[131], 0, 12U * sizeof(double));
      c_t5[143] = 20.0;
      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          b_A[i5 + 12 * i6] = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            b_A[i5 + 12 * i6] += A[i7 + 12 * i5] * S_mat->data[(i7 + S_mat->
              size[0] * i6) + S_mat->size[0] * S_mat->size[1] * (k + 1)];
          }
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 4; i6++) {
          b_K[i5 + 12 * i6] = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            b_K[i5 + 12 * i6] += K->data[(i7 + K->size[0] * i5) + K->size[0] *
              K->size[1] * k] * H[i7 + (i6 << 2)];
          }
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          b_t2 = 0.0;
          for (i7 = 0; i7 < 12; i7++) {
            b_t2 += b_A[i5 + 12 * i7] * A[i7 + 12 * i6];
          }

          d_t5[i5 + 12 * i6] = c_t5[i5 + 12 * i6] + b_t2;
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          c_K[i5 + 12 * i6] = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            c_K[i5 + 12 * i6] += b_K[i5 + 12 * i7] * K->data[(i7 + K->size[0] *
              i6) + K->size[0] * K->size[1] * k];
          }
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          b_t2 = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            b_t2 += K->data[(i7 + K->size[0] * i5) + K->size[0] * K->size[1] * k]
              * G[i7 + (i6 << 2)];
          }

          c_t5[i5 + 12 * i6] = (d_t5[i5 + 12 * i6] + c_K[i5 + 12 * i6]) + b_t2;
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          b_G[i5 + 12 * i6] = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            b_G[i5 + 12 * i6] += G[i7 + (i5 << 2)] * K->data[(i7 + K->size[0] *
              i6) + K->size[0] * K->size[1] * k];
          }
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          S_mat->data[(i6 + S_mat->size[0] * i5) + S_mat->size[0] * S_mat->size
            [1] * k] = c_t5[i6 + 12 * i5] + b_G[i6 + 12 * i5];
        }
      }

      c_x_bar[0] = (x_bar->data[x_bar->size[0] * k] * 20.0 + b_t4 * (x_bar->
        data[x_bar->size[0] * k] * 79788.456080286545 - x_wp[12 * k] *
        79788.456080286545)) - 20.0;
      c_x_bar[1] = (x_bar->data[1 + x_bar->size[0] * k] * 20.0 - b_t4 * (x_wp[1
        + 12 * k] * 79788.456080286545 - x_bar->data[1 + x_bar->size[0] * k] *
        79788.456080286545)) - 20.0;
      c_x_bar[2] = (x_bar->data[2 + x_bar->size[0] * k] * 20.0 - b_t4 * (x_wp[2
        + 12 * k] * 79788.456080286545 - x_bar->data[2 + x_bar->size[0] * k] *
        79788.456080286545)) - 20.0;
      c_x_bar[3] = x_bar->data[3 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[3 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[3 + 12 *
         k] * 797.88456080286539);
      c_x_bar[4] = x_bar->data[4 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[4 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[4 + 12 *
         k] * 797.88456080286539);
      c_x_bar[5] = x_bar->data[5 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[5 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[5 + 12 *
         k] * 797.88456080286539);
      c_x_bar[6] = x_bar->data[6 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[6 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[6 + 12 *
         k] * 797.88456080286539);
      c_x_bar[7] = x_bar->data[7 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[7 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[7 + 12 *
         k] * 797.88456080286539);
      c_x_bar[8] = x_bar->data[8 + x_bar->size[0] * k] * 20.0 + b_t4 *
        (x_bar->data[8 + x_bar->size[0] * k] * 797.88456080286539 - x_wp[8 + 12 *
         k] * 797.88456080286539);
      c_x_bar[9] = x_bar->data[9 + x_bar->size[0] * k] * 20.0;
      c_x_bar[10] = x_bar->data[10 + x_bar->size[0] * k] * 20.0;
      c_x_bar[11] = x_bar->data[11 + x_bar->size[0] * k] * 20.0;
      for (i5 = 0; i5 < 12; i5++) {
        c_A[i5] = 0.0;
        for (i6 = 0; i6 < 12; i6++) {
          b_t2 = c_A[i5] + A[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] *
            (k + 1)];
          c_A[i5] = b_t2;
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 4; i6++) {
          b_K[i5 + 12 * i6] = 0.0;
          for (i7 = 0; i7 < 4; i7++) {
            b_K[i5 + 12 * i6] += K->data[(i7 + K->size[0] * i5) + K->size[0] *
              K->size[1] * k] * H[i7 + (i6 << 2)];
          }
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        b_t2 = 0.0;
        for (i6 = 0; i6 < 4; i6++) {
          b_t2 += b_K[i5 + 12 * i6] * u_ff->data[i6 + u_ff->size[0] * k];
        }

        d_x_bar[i5] = (c_x_bar[i5] + c_A[i5]) + b_t2;
      }

      for (i5 = 0; i5 < 12; i5++) {
        d_K[i5] = 0.0;
        for (i6 = 0; i6 < 4; i6++) {
          b_t2 = d_K[i5] + K->data[(i6 + K->size[0] * i5) + K->size[0] * K->
            size[1] * k] * g[i6];
          d_K[i5] = b_t2;
        }
      }

      for (i5 = 0; i5 < 12; i5++) {
        b_t2 = 0.0;
        for (i6 = 0; i6 < 4; i6++) {
          b_t2 += G[i6 + (i5 << 2)] * u_ff->data[i6 + u_ff->size[0] * k];
        }

        s_vec->data[i5 + s_vec->size[0] * k] = (d_x_bar[i5] + d_K[i5]) + b_t2;
      }

      //          S_mat(:,:,k)
      //          s_vec(:,k)
      //          s(k)
    }

    for (i4 = 0; i4 < 2; i4++) {
      iv0[i4] = x_bar->size[i4];
    }

    i4 = b_x_bar->size[0] * b_x_bar->size[1];
    b_x_bar->size[0] = 12;
    b_x_bar->size[1] = iv0[1];
    emxEnsureCapacity_real_T1(b_x_bar, i4);
    ii = 12 * iv0[1];
    for (i4 = 0; i4 < ii; i4++) {
      b_x_bar->data[i4] = 0.0;
    }

    for (i4 = 0; i4 < 2; i4++) {
      iv0[i4] = u_bar->size[i4];
    }

    i4 = b_u_bar->size[0] * b_u_bar->size[1];
    b_u_bar->size[0] = 4;
    b_u_bar->size[1] = iv0[1];
    emxEnsureCapacity_real_T1(b_u_bar, i4);
    ii = iv0[1] << 2;
    for (i4 = 0; i4 < ii; i4++) {
      b_u_bar->data[i4] = 0.0;
    }

    for (i4 = 0; i4 < 12; i4++) {
      b_x_bar->data[i4] = x0[i4];
    }

    for (ii = 0; ii <= (int)N - 2; ii++) {
      for (i4 = 0; i4 < 12; i4++) {
        c_x_bar[i4] = b_x_bar->data[i4 + b_x_bar->size[0] * ii] - x_bar->data[i4
          + x_bar->size[0] * ii];
      }

      for (i4 = 0; i4 < 4; i4++) {
        b_t2 = 0.0;
        for (i5 = 0; i5 < 12; i5++) {
          b_t2 += K->data[(i4 + K->size[0] * i5) + K->size[0] * K->size[1] * ii]
            * c_x_bar[i5];
        }

        b_u_bar->data[i4 + b_u_bar->size[0] * ii] = (u_bar->data[i4 +
          u_bar->size[0] * ii] + u_ff->data[i4 + u_ff->size[0] * ii]) + b_t2;
      }

      //      u(:,ii) = min(umax, max(umin, u(:,ii)));
      for (i4 = 0; i4 < 12; i4++) {
        c_x_bar[i4] = b_x_bar->data[i4 + b_x_bar->size[0] * ii];
      }

      f(c_x_bar, *(double (*)[4])&b_u_bar->data[b_u_bar->size[0] * ii], dt,
        *(double (*)[12])&b_x_bar->data[b_x_bar->size[0] * (ii + 1)]);
    }

    i4 = x_bar->size[0] * x_bar->size[1];
    x_bar->size[0] = 12;
    x_bar->size[1] = b_x_bar->size[1];
    emxEnsureCapacity_real_T1(x_bar, i4);
    ii = b_x_bar->size[1];
    for (i4 = 0; i4 < ii; i4++) {
      for (i5 = 0; i5 < 12; i5++) {
        x_bar->data[i5 + x_bar->size[0] * i4] = b_x_bar->data[i5 + b_x_bar->
          size[0] * i4];
      }
    }

    i4 = u_bar->size[0] * u_bar->size[1];
    u_bar->size[0] = 4;
    u_bar->size[1] = b_u_bar->size[1];
    emxEnsureCapacity_real_T1(u_bar, i4);
    ii = b_u_bar->size[1];
    for (i4 = 0; i4 < ii; i4++) {
      for (i5 = 0; i5 < 4; i5++) {
        u_bar->data[i5 + u_bar->size[0] * i4] = b_u_bar->data[i5 + b_u_bar->
          size[0] * i4];
      }
    }

    //      J = terminalCost(x_bar(:,end), xf);
    //      t = 0;
    //      for k = 1:N-1
    //          J = J + intermediateCost(t,x_bar(:,k),u_bar(:,k),x_bar(:,k),u_bar(:,k), x_wp(:,k),t_wp); 
    //          t = t+dt;
    //      end
    //      J
    //      alpha = 1;
    //      Jmin = Inf;
    //      % Forward propagate to generate new trajectory
    //      for i = 1:5
    //          [x_bar_temp,u_bar_temp] = forwardIntTraj(x0,x_bar,u_bar, alpha*u_ff, K, N,dt); 
    //
    //          J = terminalCost(x_bar_temp(:,end), xf);
    //          t = 0;
    //          for k = 1:N-1
    //              J = J + intermediateCost(t,x_bar_temp(:,k),u_bar_temp(:,k),x_bar_temp(:,k),u_bar_temp(:,k), x_wp(:,k),t_wp); 
    //              t = t+dt;
    //          end
    //
    //          if J < Jmin
    //              Jmin = J;
    //              x_bar = x_bar_temp;
    //              u_bar = u_bar_temp;
    //          end
    //
    //          alpha = alpha/2;
    //
    //      end
    //
    //      Jmin
    //  Update algorithm iteration
    ii = 2;
  }

  emxFree_real_T(&b_u_bar);
  emxFree_real_T(&b_x_bar);
  emxFree_real_T(&S_mat);
  emxFree_real_T(&s_vec);
  emxFree_real_T(&u_ff);
}

//
// File trailer for slqSolve.cpp
//
// [EOF]
//
