//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: computeSLQTraj.h
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//
#ifndef COMPUTESLQTRAJ_H
#define COMPUTESLQTRAJ_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "computeSLQTraj_types.h"

// Function Declarations
extern void computeSLQTraj(double N, double dt, const double x0[12], const
  double xf[12], double t_wp, const double x_wp[3612], emxArray_real_T *x,
  emxArray_real_T *K, emxArray_real_T *u);

#endif

//
// File trailer for computeSLQTraj.h
//
// [EOF]
//
