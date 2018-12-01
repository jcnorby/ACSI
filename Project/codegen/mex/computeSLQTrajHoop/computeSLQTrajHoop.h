/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTrajHoop.h
 *
 * Code generation for function 'computeSLQTrajHoop'
 *
 */

#ifndef COMPUTESLQTRAJHOOP_H
#define COMPUTESLQTRAJHOOP_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "computeSLQTrajHoop_types.h"

/* Function Declarations */
extern void computeSLQTrajHoop(const emlrtStack *sp, real_T N, real_T dt, const
  real_T x0[12], const real_T xf[12], const real_T x0_wp[3], const real_T
  dx0_wp[3], const real_T ddx0_wp[3], emxArray_real_T *x, emxArray_real_T *K,
  emxArray_real_T *u, real_T *t_wp, emxArray_real_T *x_wp);

#endif

/* End of code generation (computeSLQTrajHoop.h) */
