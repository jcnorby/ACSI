/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTraj_initialize.cpp
 *
 * Code generation for function 'computeSLQTraj_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "computeSLQTraj_initialize.h"
#include "_coder_computeSLQTraj_mex.h"
#include "computeSLQTraj_data.h"

/* Function Definitions */
void computeSLQTraj_initialize()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (computeSLQTraj_initialize.cpp) */
