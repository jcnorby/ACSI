/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.h
 *
 * Code generation for function 'inv'
 *
 */

#ifndef INV_H
#define INV_H

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
extern void inv(const emlrtStack *sp, const real_T x[16], real_T y[16]);

#endif

/* End of code generation (inv.h) */
