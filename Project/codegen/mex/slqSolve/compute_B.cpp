/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_B.cpp
 *
 * Code generation for function 'compute_B'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "compute_B.h"

/* Function Definitions */
void compute_B(const real_T in1[12], real_T B[48])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t23;
  real_T t24;
  real_T dv1[48];
  int32_T i1;

  /* COMPUTE_B */
  /*     B = COMPUTE_B(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.1. */
  /*     25-Nov-2018 15:44:56 */
  /*  Version 1. Inputs are (q,u). */
  t2 = muDoubleScalarCos(in1[5]);
  t3 = muDoubleScalarSin(in1[3]);
  t4 = muDoubleScalarCos(in1[3]);
  t5 = muDoubleScalarSin(in1[5]);
  t6 = muDoubleScalarSin(in1[4]);
  t7 = muDoubleScalarCos(in1[4]);
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
  dv1[0] = 0.0;
  dv1[1] = 0.0;
  dv1[2] = 0.0;
  dv1[3] = 0.0;
  dv1[4] = 0.0;
  dv1[5] = 0.0;
  dv1[6] = t3 * t5 * 0.37037037037037035 + t2 * t4 * t6 * 0.37037037037037035;
  dv1[7] = t2 * t3 * -0.37037037037037035 + t4 * t5 * t6 * 0.37037037037037035;
  dv1[8] = t4 * t7 * 0.37037037037037035;
  memset(&dv1[9], 0, 12U * sizeof(real_T));
  dv1[21] = t16 * t17 * ((((t8 * t13 * 1.8075799330840252E+35 + t10 * t11 *
    3.1904874722507191E+35) + t9 * t13 * 3.1904874722507191E+35) + t11 * t12 *
    3.1904874722507191E+35) + t8 * t9 * t11 * 6.3809749445014382E+35) *
    1.8881429367570871E-36;
  dv1[22] = t19;
  dv1[23] = t23;
  memset(&dv1[24], 0, 9U * sizeof(real_T));
  dv1[33] = t19;
  dv1[34] = t16 * t18 * (t7 * t8 * 3.1904874722507191E+35 + t7 * t9 *
    1.8075799330840252E+35) * 1.8881429367570871E-36;
  dv1[35] = t24;
  memset(&dv1[36], 0, 9U * sizeof(real_T));
  dv1[45] = t23;
  dv1[46] = t24;
  dv1[47] = t16 * t17 * (t8 * 1.8075799330840252E+35 + t9 *
    3.1904874722507191E+35) * 1.8881429367570871E-36;
  for (i1 = 0; i1 < 4; i1++) {
    memcpy(&B[i1 * 12], &dv1[i1 * 12], 12U * sizeof(real_T));
  }
}

/* End of code generation (compute_B.cpp) */
