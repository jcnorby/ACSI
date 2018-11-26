/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_Q_mat.cpp
 *
 * Code generation for function 'compute_Q_mat'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "compute_Q_mat.h"

/* Function Definitions */
void compute_Q_mat(real_T t, real_T t_wp, real_T Q[144])
{
  real_T t2;
  real_T t6;
  real_T b_t6[144];
  int32_T i3;

  /* COMPUTE_Q_MAT */
  /*     Q = COMPUTE_Q_MAT(T,IN2,IN3,IN4,IN5,IN6,T_WP) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.1. */
  /*     25-Nov-2018 15:45:01 */
  t2 = t - t_wp;
  t2 = muDoubleScalarExp(-(t2 * t2 * 50.0));
  t6 = t2 * 79788.456080286545 + 20.0;
  t2 = t2 * 797.88456080286539 + 20.0;
  b_t6[0] = t6;
  memset(&b_t6[1], 0, 12U * sizeof(real_T));
  b_t6[13] = t6;
  memset(&b_t6[14], 0, 12U * sizeof(real_T));
  b_t6[26] = t6;
  memset(&b_t6[27], 0, 12U * sizeof(real_T));
  b_t6[39] = t2;
  memset(&b_t6[40], 0, 12U * sizeof(real_T));
  b_t6[52] = t2;
  memset(&b_t6[53], 0, 12U * sizeof(real_T));
  b_t6[65] = t2;
  memset(&b_t6[66], 0, 12U * sizeof(real_T));
  b_t6[78] = t2;
  memset(&b_t6[79], 0, 12U * sizeof(real_T));
  b_t6[91] = t2;
  memset(&b_t6[92], 0, 12U * sizeof(real_T));
  b_t6[104] = t2;
  memset(&b_t6[105], 0, 12U * sizeof(real_T));
  b_t6[117] = 20.0;
  memset(&b_t6[118], 0, 12U * sizeof(real_T));
  b_t6[130] = 20.0;
  memset(&b_t6[131], 0, 12U * sizeof(real_T));
  b_t6[143] = 20.0;
  for (i3 = 0; i3 < 12; i3++) {
    memcpy(&Q[i3 * 12], &b_t6[i3 * 12], 12U * sizeof(real_T));
  }
}

/* End of code generation (compute_Q_mat.cpp) */
