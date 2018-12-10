/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.cpp
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "norm.h"
#include "computeSLQTrajHoop_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "computeSLQTrajHoop_data.h"
#include "blas.h"
#include "lapacke.h"

/* Type Definitions */
#include <stdlib.h>

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 38, /* lineNo */
  "norm",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/norm.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 47, /* lineNo */
  "norm",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/norm.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 194,/* lineNo */
  "norm",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/norm.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 35, /* lineNo */
  "xnrm2",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 60, /* lineNo */
  "norm",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/norm.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 69, /* lineNo */
  "norm",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/norm.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 29, /* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 101,/* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 105,/* lineNo */
  "svd",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/svd.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 28, /* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 193,/* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 125,/* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 114,/* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 107,/* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 56, /* lineNo */
  "xgesvd",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

static emlrtRTEInfo h_emlrtRTEI = { 28,/* lineNo */
  33,                                  /* colNo */
  "xgesvd",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pName */
};

/* Function Definitions */
real_T b_norm(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  int32_T n;
  boolean_T overflow;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T j;
  int32_T absx_tmp;
  emxArray_real_T *A;
  real_T absx;
  ptrdiff_t info_t;
  real_T s_data[4];
  real_T superb_data[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (x->size[1] == 0) {
    y = 0.0;
  } else if (x->size[1] == 1) {
    st.site = &fb_emlrtRSI;
    b_st.site = &hb_emlrtRSI;
    c_st.site = &ib_emlrtRSI;
    n_t = (ptrdiff_t)4;
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &x->data[0], &incx_t);
  } else {
    st.site = &gb_emlrtRSI;
    n = x->size[1];
    y = 0.0;
    b_st.site = &kb_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      c_st.site = &jb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (j = 0; j < n; j++) {
      absx_tmp = j << 2;
      absx = muDoubleScalarAbs(x->data[absx_tmp]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }

      absx = muDoubleScalarAbs(x->data[1 + absx_tmp]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }

      absx = muDoubleScalarAbs(x->data[2 + absx_tmp]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }

      absx = muDoubleScalarAbs(x->data[3 + absx_tmp]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }

    if ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y))) {
      emxInit_real_T(&st, &A, 2, &h_emlrtRTEI, true);
      b_st.site = &lb_emlrtRSI;
      c_st.site = &mb_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      n = A->size[0] * A->size[1];
      A->size[0] = 4;
      A->size[1] = x->size[1];
      emxEnsureCapacity_real_T(&e_st, A, n, &h_emlrtRTEI);
      j = x->size[0] * x->size[1];
      for (n = 0; n < j; n++) {
        A->data[n] = x->data[n];
      }

      f_st.site = &ub_emlrtRSI;
      f_st.site = &tb_emlrtRSI;
      f_st.site = &sb_emlrtRSI;
      f_st.site = &rb_emlrtRSI;
      info_t = LAPACKE_dgesvd(102, 'N', 'N', (ptrdiff_t)4, (ptrdiff_t)x->size[1],
        &A->data[0], (ptrdiff_t)4, &s_data[0], NULL, (ptrdiff_t)1, NULL,
        (ptrdiff_t)1, &superb_data[0]);
      n = (int32_T)info_t;
      f_st.site = &qb_emlrtRSI;
      emxFree_real_T(&A);
      if (n < 0) {
        if (n == -1010) {
          g_st.site = &yb_emlrtRSI;
          error(&g_st);
        } else {
          g_st.site = &ac_emlrtRSI;
          b_error(&g_st, n);
        }
      }

      if (n > 0) {
        d_st.site = &ob_emlrtRSI;
        c_error(&d_st);
      }

      y = s_data[0];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

real_T c_norm(const real_T x[16])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  int32_T s_tmp;
  real_T s;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    s_tmp = j << 2;
    s = ((muDoubleScalarAbs(x[s_tmp]) + muDoubleScalarAbs(x[1 + s_tmp])) +
         muDoubleScalarAbs(x[2 + s_tmp])) + muDoubleScalarAbs(x[3 + s_tmp]);
    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

/* End of code generation (norm.cpp) */
