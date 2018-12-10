/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.h
 *
 * Code generation for function 'norm'
 *
 */

#ifndef NORM_H
#define NORM_H

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

/* Type Definitions */

/* Function Declarations */
extern real_T b_norm(const emlrtStack *sp, const emxArray_real_T *x);
extern real_T c_norm(const real_T x[16]);

#endif

/* End of code generation (norm.h) */
