/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTraj_terminate.cpp
 *
 * Code generation for function 'computeSLQTraj_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "computeSLQTraj_terminate.h"
#include "_coder_computeSLQTraj_mex.h"
#include "computeSLQTraj_data.h"

/* Function Definitions */
void computeSLQTraj_atexit()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void computeSLQTraj_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (computeSLQTraj_terminate.cpp) */
