//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xaxpy.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "xaxpy.h"

// Function Definitions

//
// Arguments    : int n
//                double a
//                const emxArray_real_T *x
//                int ix0
//                double y[4]
//                int iy0
// Return Type  : void
//
void b_xaxpy(int n, double a, const emxArray_real_T *x, int ix0, double y[4],
             int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x->data[ix];
      ix++;
      iy++;
    }
  }
}

//
// Arguments    : int n
//                double a
//                const double x[4]
//                int ix0
//                emxArray_real_T *y
//                int iy0
// Return Type  : void
//
void c_xaxpy(int n, double a, const double x[4], int ix0, emxArray_real_T *y,
             int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

//
// Arguments    : int n
//                double a
//                int ix0
//                emxArray_real_T *y
//                int iy0
// Return Type  : void
//
void xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * y->data[ix];
      ix++;
      iy++;
    }
  }
}

//
// File trailer for xaxpy.cpp
//
// [EOF]
//
