/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_computeSLQTraj_mex.cpp
 *
 * Code generation for function '_coder_computeSLQTraj_mex'
 *
 */

/* Include files */
#include "computeSLQTraj.h"
#include "_coder_computeSLQTraj_mex.h"
#include "computeSLQTraj_terminate.h"
#include "_coder_computeSLQTraj_api.h"
#include "computeSLQTraj_initialize.h"
#include "computeSLQTraj_data.h"

/* Function Declarations */
static void computeSLQTraj_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T
  nrhs, const mxArray *prhs[6]);

/* Function Definitions */
static void computeSLQTraj_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T
  nrhs, const mxArray *prhs[6])
{
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        14, "computeSLQTraj");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "computeSLQTraj");
  }

  /* Call the function. */
  computeSLQTraj_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  computeSLQTraj_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(computeSLQTraj_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  computeSLQTraj_initialize();

  /* Dispatch the entry-point. */
  computeSLQTraj_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_computeSLQTraj_mex.cpp) */
