//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: norm.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include <cmath>
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "norm.h"
#include "svd.h"

// Function Definitions

//
// Arguments    : const emxArray_real_T *x
// Return Type  : double
//
double norm(const emxArray_real_T *x)
{
  double y;
  int j;
  double absx;
  int i;
  double tmp_data[4];
  int tmp_size[1];
  double absxk;
  double t;
  if (x->size[1] == 0) {
    y = 0.0;
  } else if (x->size[1] == 1) {
    y = 0.0;
    absx = 3.3121686421112381E-170;
    for (j = 1; j < 5; j++) {
      absxk = std::abs(x->data[j - 1]);
      if (absxk > absx) {
        t = absx / absxk;
        y = 1.0 + y * t * t;
        absx = absxk;
      } else {
        t = absxk / absx;
        y += t * t;
      }
    }

    y = absx * std::sqrt(y);
  } else {
    y = 0.0;
    for (j = 1; j <= x->size[1]; j++) {
      for (i = 0; i < 4; i++) {
        absx = std::abs(x->data[i + x->size[0] * (j - 1)]);
        if (rtIsNaN(absx) || (absx > y)) {
          y = absx;
        }
      }
    }

    if ((!rtIsInf(y)) && (!rtIsNaN(y))) {
      svd(x, tmp_data, tmp_size);
      y = tmp_data[0];
    }
  }

  return y;
}

//
// File trailer for norm.cpp
//
// [EOF]
//
