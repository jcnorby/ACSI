//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xaxpy.h
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//
#ifndef XAXPY_H
#define XAXPY_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "computeSLQTraj_types.h"

// Function Declarations
extern void b_xaxpy(int n, double a, const emxArray_real_T *x, int ix0, double
                    y[4], int iy0);
extern void c_xaxpy(int n, double a, const double x[4], int ix0, emxArray_real_T
                    *y, int iy0);
extern void xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0);

#endif

//
// File trailer for xaxpy.h
//
// [EOF]
//
