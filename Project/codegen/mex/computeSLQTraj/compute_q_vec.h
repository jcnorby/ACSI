/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_q_vec.h
 *
 * Code generation for function 'compute_q_vec'
 *
 */

#ifndef COMPUTE_Q_VEC_H
#define COMPUTE_Q_VEC_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "computeSLQTraj_types.h"

/* Function Declarations */
extern void compute_q_vec(real_T t, const real_T in2[12], const real_T in6[12],
  real_T t_wp, real_T q_vec[12]);

#endif

/* End of code generation (compute_q_vec.h) */
