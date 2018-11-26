/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_q_vec.cpp
 *
 * Code generation for function 'compute_q_vec'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "compute_q_vec.h"

/* Function Definitions */
void compute_q_vec(real_T t, const real_T in2[12], const real_T in6[12], real_T
                   t_wp, real_T q_vec[12])
{
  real_T t2;

  /* COMPUTE_Q_VEC */
  /*     Q_VEC = COMPUTE_Q_VEC(T,IN2,IN3,IN4,IN5,IN6,T_WP) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.1. */
  /*     25-Nov-2018 15:45:00 */
  t2 = t - t_wp;
  t2 = muDoubleScalarExp(-(t2 * t2 * 50.0));
  q_vec[0] = (in2[0] * 20.0 + t2 * (in2[0] * 79788.456080286545 - in6[0] *
    79788.456080286545)) - 20.0;
  q_vec[1] = (in2[1] * 20.0 - t2 * (in6[1] * 79788.456080286545 - in2[1] *
    79788.456080286545)) - 20.0;
  q_vec[2] = (in2[2] * 20.0 - t2 * (in6[2] * 79788.456080286545 - in2[2] *
    79788.456080286545)) - 20.0;
  q_vec[3] = in2[3] * 20.0 + t2 * (in2[3] * 797.88456080286539 - in6[3] *
    797.88456080286539);
  q_vec[4] = in2[4] * 20.0 + t2 * (in2[4] * 797.88456080286539 - in6[4] *
    797.88456080286539);
  q_vec[5] = in2[5] * 20.0 + t2 * (in2[5] * 797.88456080286539 - in6[5] *
    797.88456080286539);
  q_vec[6] = in2[6] * 20.0 + t2 * (in2[6] * 797.88456080286539 - in6[6] *
    797.88456080286539);
  q_vec[7] = in2[7] * 20.0 + t2 * (in2[7] * 797.88456080286539 - in6[7] *
    797.88456080286539);
  q_vec[8] = in2[8] * 20.0 + t2 * (in2[8] * 797.88456080286539 - in6[8] *
    797.88456080286539);
  q_vec[9] = in2[9] * 20.0;
  q_vec[10] = in2[10] * 20.0;
  q_vec[11] = in2[11] * 20.0;
}

/* End of code generation (compute_q_vec.cpp) */
