//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: svd.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include <cmath>
#include <string.h>
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "svd.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "computeSLQTraj_emxutil.h"
#include "xrotg.h"
#include "sqrt.h"

// Function Definitions

//
// Arguments    : const emxArray_real_T *A
//                double U_data[]
//                int U_size[1]
// Return Type  : void
//
void svd(const emxArray_real_T *A, double U_data[], int U_size[1])
{
  emxArray_real_T *b_A;
  int m;
  int ns;
  int p;
  int minnp;
  double s_data[5];
  emxArray_real_T *e;
  double work[4];
  int nrt;
  int qs;
  int nct;
  int q;
  int iter;
  boolean_T apply_transform;
  double ztest0;
  double ztest;
  double snorm;
  boolean_T exitg1;
  double b_f;
  double scale;
  double sqds;
  double b;
  emxInit_real_T(&b_A, 2);
  m = b_A->size[0] * b_A->size[1];
  b_A->size[0] = 4;
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T1(b_A, m);
  ns = A->size[0] * A->size[1];
  for (m = 0; m < ns; m++) {
    b_A->data[m] = A->data[m];
  }

  p = A->size[1];
  ns = A->size[1];
  if (5 < ns) {
    ns = 5;
  }

  minnp = A->size[1];
  if (4 < minnp) {
    minnp = 4;
  }

  if (0 <= ns - 1) {
    memset(&s_data[0], 0, (unsigned int)(ns * (int)sizeof(double)));
  }

  emxInit_real_T1(&e, 1);
  ns = A->size[1];
  m = e->size[0];
  e->size[0] = ns;
  emxEnsureCapacity_real_T2(e, m);
  for (m = 0; m < ns; m++) {
    e->data[m] = 0.0;
  }

  for (ns = 0; ns < 4; ns++) {
    work[ns] = 0.0;
  }

  if (A->size[1] != 0) {
    if (A->size[1] > 2) {
      nrt = A->size[1] - 2;
    } else {
      nrt = 0;
    }

    if (!(nrt < 4)) {
      nrt = 4;
    }

    nct = A->size[1];
    if (3 < nct) {
      nct = 3;
    }

    if (nct > nrt) {
      m = nct;
    } else {
      m = nrt;
    }

    for (q = 0; q < m; q++) {
      iter = q + (q << 2);
      apply_transform = false;
      if (q + 1 <= nct) {
        ztest0 = xnrm2(4 - q, b_A, iter + 1);
        if (ztest0 > 0.0) {
          apply_transform = true;
          if (b_A->data[iter] < 0.0) {
            ztest0 = -ztest0;
          }

          s_data[q] = ztest0;
          if (std::abs(s_data[q]) >= 1.0020841800044864E-292) {
            ztest0 = 1.0 / s_data[q];
            ns = (iter - q) + 4;
            for (qs = iter; qs < ns; qs++) {
              b_A->data[qs] *= ztest0;
            }
          } else {
            ns = (iter - q) + 4;
            for (qs = iter; qs < ns; qs++) {
              b_A->data[qs] /= s_data[q];
            }
          }

          b_A->data[iter]++;
          s_data[q] = -s_data[q];
        } else {
          s_data[q] = 0.0;
        }
      }

      for (ns = q + 1; ns < p; ns++) {
        qs = q + (ns << 2);
        if (apply_transform) {
          ztest0 = -(xdotc(4 - q, b_A, iter + 1, b_A, qs + 1) / b_A->data[q +
                     b_A->size[0] * q]);
          xaxpy(4 - q, ztest0, iter + 1, b_A, qs + 1);
        }

        e->data[ns] = b_A->data[qs];
      }

      if (q + 1 <= nrt) {
        ns = p - q;
        ztest0 = b_xnrm2(ns - 1, e, q + 2);
        if (ztest0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            ztest0 = -ztest0;
          }

          e->data[q] = ztest0;
          ztest0 = e->data[q];
          if (std::abs(e->data[q]) >= 1.0020841800044864E-292) {
            ztest0 = 1.0 / e->data[q];
            ns += q;
            for (qs = q + 1; qs < ns; qs++) {
              e->data[qs] *= ztest0;
            }
          } else {
            ns += q;
            for (qs = q + 1; qs < ns; qs++) {
              e->data[qs] /= ztest0;
            }
          }

          e->data[q + 1]++;
          e->data[q] = -e->data[q];
          if (q + 2 <= 4) {
            for (ns = q + 1; ns + 1 < 5; ns++) {
              work[ns] = 0.0;
            }

            for (ns = q + 1; ns < p; ns++) {
              b_xaxpy(3 - q, e->data[ns], b_A, (q + (ns << 2)) + 2, work, q + 2);
            }

            for (ns = q + 1; ns < p; ns++) {
              c_xaxpy(3 - q, -e->data[ns] / e->data[q + 1], work, q + 2, b_A, (q
                       + (ns << 2)) + 2);
            }
          }
        }
      }
    }

    m = A->size[1];
    if (!(m < 5)) {
      m = 5;
    }

    if (nct < A->size[1]) {
      s_data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }

    if (4 < m) {
      s_data[4] = 0.0;
    }

    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }

    e->data[m - 1] = 0.0;
    for (q = 0; q < m; q++) {
      if (s_data[q] != 0.0) {
        ztest = std::abs(s_data[q]);
        ztest0 = s_data[q] / ztest;
        s_data[q] = ztest;
        if (q + 1 < m) {
          e->data[q] /= ztest0;
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        ztest = std::abs(e->data[q]);
        ztest0 = e->data[q];
        e->data[q] = ztest;
        s_data[q + 1] *= ztest / ztest0;
      }
    }

    nrt = m;
    iter = 0;
    snorm = 0.0;
    for (ns = 0; ns < m; ns++) {
      ztest0 = std::abs(s_data[ns]);
      ztest = std::abs(e->data[ns]);
      if ((ztest0 > ztest) || rtIsNaN(ztest)) {
      } else {
        ztest0 = ztest;
      }

      if (!((snorm > ztest0) || rtIsNaN(ztest0))) {
        snorm = ztest0;
      }
    }

    while ((m > 0) && (!(iter >= 75))) {
      q = m - 1;
      exitg1 = false;
      while (!(exitg1 || (q == 0))) {
        ztest0 = std::abs(e->data[q - 1]);
        if ((ztest0 <= 2.2204460492503131E-16 * (std::abs(s_data[q - 1]) + std::
              abs(s_data[q]))) || (ztest0 <= 1.0020841800044864E-292) || ((iter >
              20) && (ztest0 <= 2.2204460492503131E-16 * snorm))) {
          e->data[q - 1] = 0.0;
          exitg1 = true;
        } else {
          q--;
        }
      }

      if (q == m - 1) {
        ns = 4;
      } else {
        qs = m;
        ns = m;
        exitg1 = false;
        while ((!exitg1) && (ns >= q)) {
          qs = ns;
          if (ns == q) {
            exitg1 = true;
          } else {
            ztest0 = 0.0;
            if (ns < m) {
              ztest0 = std::abs(e->data[ns - 1]);
            }

            if (ns > q + 1) {
              ztest0 += std::abs(e->data[ns - 2]);
            }

            ztest = std::abs(s_data[ns - 1]);
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
                 1.0020841800044864E-292)) {
              s_data[ns - 1] = 0.0;
              exitg1 = true;
            } else {
              ns--;
            }
          }
        }

        if (qs == q) {
          ns = 3;
        } else if (qs == m) {
          ns = 1;
        } else {
          ns = 2;
          q = qs;
        }
      }

      switch (ns) {
       case 1:
        b_f = e->data[m - 2];
        e->data[m - 2] = 0.0;
        for (qs = m - 3; qs + 2 >= q + 1; qs--) {
          xrotg(&s_data[qs + 1], &b_f, &ztest0, &ztest);
          if (qs + 2 > q + 1) {
            b_f = -ztest * e->data[qs];
            e->data[qs] *= ztest0;
          }
        }
        break;

       case 2:
        b_f = e->data[q - 1];
        e->data[q - 1] = 0.0;
        while (q + 1 <= m) {
          xrotg(&s_data[q], &b_f, &ztest0, &ztest);
          b_f = -ztest * e->data[q];
          e->data[q] *= ztest0;
          q++;
        }
        break;

       case 3:
        scale = std::abs(s_data[m - 1]);
        ztest = std::abs(s_data[m - 2]);
        if (!((scale > ztest) || rtIsNaN(ztest))) {
          scale = ztest;
        }

        ztest = std::abs(e->data[m - 2]);
        if (!((scale > ztest) || rtIsNaN(ztest))) {
          scale = ztest;
        }

        ztest = std::abs(s_data[q]);
        if (!((scale > ztest) || rtIsNaN(ztest))) {
          scale = ztest;
        }

        ztest = std::abs(e->data[q]);
        if (!((scale > ztest) || rtIsNaN(ztest))) {
          scale = ztest;
        }

        b_f = s_data[m - 1] / scale;
        ztest0 = s_data[m - 2] / scale;
        ztest = e->data[m - 2] / scale;
        sqds = s_data[q] / scale;
        b = ((ztest0 + b_f) * (ztest0 - b_f) + ztest * ztest) / 2.0;
        ztest0 = b_f * ztest;
        ztest0 *= ztest0;
        if ((b != 0.0) || (ztest0 != 0.0)) {
          ztest = b * b + ztest0;
          b_sqrt(&ztest);
          if (b < 0.0) {
            ztest = -ztest;
          }

          ztest = ztest0 / (b + ztest);
        } else {
          ztest = 0.0;
        }

        b_f = (sqds + b_f) * (sqds - b_f) + ztest;
        b = sqds * (e->data[q] / scale);
        for (qs = q + 1; qs < m; qs++) {
          xrotg(&b_f, &b, &ztest0, &ztest);
          if (qs > q + 1) {
            e->data[qs - 2] = b_f;
          }

          b_f = ztest0 * s_data[qs - 1] + ztest * e->data[qs - 1];
          e->data[qs - 1] = ztest0 * e->data[qs - 1] - ztest * s_data[qs - 1];
          b = ztest * s_data[qs];
          s_data[qs] *= ztest0;
          s_data[qs - 1] = b_f;
          xrotg(&s_data[qs - 1], &b, &ztest0, &ztest);
          b_f = ztest0 * e->data[qs - 1] + ztest * s_data[qs];
          s_data[qs] = -ztest * e->data[qs - 1] + ztest0 * s_data[qs];
          b = ztest * e->data[qs];
          e->data[qs] *= ztest0;
        }

        e->data[m - 2] = b_f;
        iter++;
        break;

       default:
        if (s_data[q] < 0.0) {
          s_data[q] = -s_data[q];
        }

        ns = q + 1;
        while ((q + 1 < nrt) && (s_data[q] < s_data[ns])) {
          ztest = s_data[q];
          s_data[q] = s_data[ns];
          s_data[ns] = ztest;
          q = ns;
          ns++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  U_size[0] = minnp;
  for (qs = 0; qs < minnp; qs++) {
    U_data[qs] = s_data[qs];
  }
}

//
// File trailer for svd.cpp
//
// [EOF]
//
