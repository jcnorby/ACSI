/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_computeSLQTraj_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 26-Nov-2018 17:44:12
 */

#ifndef _CODER_COMPUTESLQTRAJ_API_H
#define _CODER_COMPUTESLQTRAJ_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_computeSLQTraj_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void computeSLQTraj(real_T N, real_T dt, real_T x0[12], real_T xf[12],
  real_T t_wp, real_T x_wp[3612], emxArray_real_T *x, emxArray_real_T *K,
  emxArray_real_T *u);
extern void computeSLQTraj_api(const mxArray * const prhs[6], int32_T nlhs,
  const mxArray *plhs[3]);
extern void computeSLQTraj_atexit(void);
extern void computeSLQTraj_initialize(void);
extern void computeSLQTraj_terminate(void);
extern void computeSLQTraj_xil_terminate(void);

#endif

/*
 * File trailer for _coder_computeSLQTraj_api.h
 *
 * [EOF]
 */
