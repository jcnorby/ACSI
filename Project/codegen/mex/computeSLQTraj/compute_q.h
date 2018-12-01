/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_q.h
 *
 * Code generation for function 'compute_q'
 *
 */

#ifndef COMPUTE_Q_H
#define COMPUTE_Q_H

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
extern real_T compute_q(real_T t, const real_T in2[12], const real_T in3[4],
  const real_T in4[12], const real_T in5[4], const real_T in6[12], real_T t_wp);

#endif

/* End of code generation (compute_q.h) */
