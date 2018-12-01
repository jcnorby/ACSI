/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTraj.h
 *
 * Code generation for function 'computeSLQTraj'
 *
 */

#ifndef COMPUTESLQTRAJ_H
#define COMPUTESLQTRAJ_H

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
extern void computeSLQTraj(const emlrtStack *sp, real_T N, real_T dt, const
  real_T x0[12], const real_T xf[12], real_T t_wp, const real_T x_wp[1812],
  emxArray_real_T *x, emxArray_real_T *K, emxArray_real_T *u);

#endif

/* End of code generation (computeSLQTraj.h) */
