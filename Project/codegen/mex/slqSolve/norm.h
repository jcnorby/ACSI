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
#include "slqSolve_types.h"

/* Type Definitions */

/* Function Declarations */
extern real_T b_norm(const real_T x[36]);
extern real_T norm(const emlrtStack *sp, const real_T x[1800]);

#endif

/* End of code generation (norm.h) */
