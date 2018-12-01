/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_computeSLQTrajHoop_mex.cpp
 *
 * Code generation for function '_coder_computeSLQTrajHoop_mex'
 *
 */

/* Include files */
#include "computeSLQTrajHoop.h"
#include "_coder_computeSLQTrajHoop_mex.h"
#include "computeSLQTrajHoop_terminate.h"
#include "_coder_computeSLQTrajHoop_api.h"
#include "computeSLQTrajHoop_initialize.h"
#include "computeSLQTrajHoop_data.h"

/* Function Declarations */
static void computeSLQTrajHoop_mexFunction(int32_T nlhs, mxArray *plhs[5],
  int32_T nrhs, const mxArray *prhs[9]);

/* Function Definitions */
static void computeSLQTrajHoop_mexFunction(int32_T nlhs, mxArray *plhs[5],
  int32_T nrhs, const mxArray *prhs[9])
{
  const mxArray *outputs[5];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        18, "computeSLQTrajHoop");
  }

  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "computeSLQTrajHoop");
  }

  /* Call the function. */
  computeSLQTrajHoop_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  computeSLQTrajHoop_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(computeSLQTrajHoop_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  computeSLQTrajHoop_initialize();

  /* Dispatch the entry-point. */
  computeSLQTrajHoop_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_computeSLQTrajHoop_mex.cpp) */
