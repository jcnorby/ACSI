/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * terminalCost.cpp
 *
 * Code generation for function 'terminalCost'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "terminalCost.h"
#include "slqSolve_data.h"

/* Function Definitions */
real_T terminalCost(const real_T x[12], const real_T xf[12])
{
  real_T L;
  int32_T H[144];
  int32_T i3;
  int32_T i;
  real_T dx[12];
  static const int32_T iv9[9] = { 100000, 0, 0, 0, 100000, 0, 0, 0, 100000 };

  real_T y[12];
  static const int8_T iv10[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  memset(&H[0], 0, 144U * sizeof(int32_T));
  for (i3 = 0; i3 < 3; i3++) {
    for (i = 0; i < 3; i++) {
      H[i + 12 * i3] = iv9[i + 3 * i3];
      H[(i + 12 * (3 + i3)) + 3] = iv0[i + 3 * i3];
      H[(i + 12 * (6 + i3)) + 6] = iv9[i + 3 * i3];
      H[(i + 12 * (9 + i3)) + 9] = iv10[i + 3 * i3];
    }
  }

  for (i = 0; i < 12; i++) {
    dx[i] = x[i] - xf[i];
  }

  L = 0.0;
  for (i = 0; i < 12; i++) {
    y[i] = 0.0;
    for (i3 = 0; i3 < 12; i3++) {
      y[i] += dx[i3] * (real_T)H[i3 + 12 * i];
    }

    L += y[i] * dx[i];
  }

  return L;
}

/* End of code generation (terminalCost.cpp) */
