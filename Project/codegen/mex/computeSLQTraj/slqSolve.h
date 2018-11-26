/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * slqSolve.h
 *
 * Code generation for function 'slqSolve'
 *
 */

#ifndef SLQSOLVE_H
#define SLQSOLVE_H

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
extern void slqSolve(const emlrtStack *sp, emxArray_real_T *x_bar,
                     emxArray_real_T *u_bar, real_T N, real_T dt, const real_T
                     x0[12], const real_T x_wp[3612], real_T t_wp, const real_T
                     xf[12], emxArray_real_T *K);

#endif

/* End of code generation (slqSolve.h) */
