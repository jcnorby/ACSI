//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: slqSolve.h
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//
#ifndef SLQSOLVE_H
#define SLQSOLVE_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "computeSLQTraj_types.h"

// Function Declarations
extern void slqSolve(emxArray_real_T *x_bar, emxArray_real_T *u_bar, double N,
                     double dt, const double x0[12], const double x_wp[3612],
                     double t_wp, const double xf[12], emxArray_real_T *K);

#endif

//
// File trailer for slqSolve.h
//
// [EOF]
//
