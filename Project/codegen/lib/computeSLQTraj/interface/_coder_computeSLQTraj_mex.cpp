/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_computeSLQTraj_mex.cpp
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 26-Nov-2018 17:44:12
 */

/* Include Files */
#include "_coder_computeSLQTraj_api.h"
#include "_coder_computeSLQTraj_mex.h"

/* Function Declarations */
static void computeSLQTraj_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T
  nrhs, const mxArray *prhs[6]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[3]
 *                int32_T nrhs
 *                const mxArray *prhs[6]
 * Return Type  : void
 */
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

/*
 * Arguments    : int32_T nlhs
 *                mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
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

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_computeSLQTraj_mex.cpp
 *
 * [EOF]
 */
