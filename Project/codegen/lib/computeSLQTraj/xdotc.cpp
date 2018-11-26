//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xdotc.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "xdotc.h"

// Function Definitions

//
// Arguments    : int n
//                const emxArray_real_T *x
//                int ix0
//                const emxArray_real_T *y
//                int iy0
// Return Type  : double
//
double xdotc(int n, const emxArray_real_T *x, int ix0, const emxArray_real_T *y,
             int iy0)
{
  double d;
  int ix;
  int iy;
  int k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x->data[ix - 1] * y->data[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

//
// File trailer for xdotc.cpp
//
// [EOF]
//
