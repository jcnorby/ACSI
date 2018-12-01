/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getDynSys.h
 *
 * Code generation for function 'getDynSys'
 *
 */

#ifndef GETDYNSYS_H
#define GETDYNSYS_H

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
extern void getDynSys(const real_T in1[12], const real_T in2[4], real_T dstates
                      [12]);

#endif

/* End of code generation (getDynSys.h) */
