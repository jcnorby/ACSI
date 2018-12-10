/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTrajHoop_mexutil.cpp
 *
 * Code generation for function 'computeSLQTrajHoop_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "computeSLQTrajHoop_mexutil.h"

/* Function Definitions */
const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m8;
  y = NULL;
  m8 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m8);
  return y;
}

/* End of code generation (computeSLQTrajHoop_mexutil.cpp) */
