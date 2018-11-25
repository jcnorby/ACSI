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
#include <string.h>
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "norm.h"
#include "error.h"
#include "lapacke.h"

/* Type Definitions */
#include <stdlib.h>

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 47,  /* lineNo */
  "norm",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 69,  /* lineNo */
  "norm",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 29,  /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 101, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 105, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 28,  /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 193, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 125, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 114, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 107, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 56,  /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

/* Function Definitions */
real_T b_norm(const real_T x[36])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  real_T s;
  int32_T i;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 6)) {
    s = 0.0;
    for (i = 0; i < 6; i++) {
      s += muDoubleScalarAbs(x[i + 6 * j]);
    }

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

real_T norm(const emlrtStack *sp, const real_T x[1800])
{
  real_T y;
  int32_T j;
  int32_T i;
  real_T absx;
  real_T A[1800];
  ptrdiff_t info_t;
  real_T s[6];
  real_T superb[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &l_emlrtRSI;
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
  y = 0.0;
  for (j = 0; j < 300; j++) {
    for (i = 0; i < 6; i++) {
      absx = muDoubleScalarAbs(x[i + 6 * j]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }
  }

  if ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y))) {
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    d_st.site = &o_emlrtRSI;
    e_st.site = &q_emlrtRSI;
    memcpy(&A[0], &x[0], 1800U * sizeof(real_T));
    f_st.site = &v_emlrtRSI;
    f_st.site = &u_emlrtRSI;
    f_st.site = &t_emlrtRSI;
    f_st.site = &s_emlrtRSI;
    info_t = LAPACKE_dgesvd(102, 'N', 'N', (ptrdiff_t)6, (ptrdiff_t)300, &A[0],
      (ptrdiff_t)6, &s[0], NULL, (ptrdiff_t)1, NULL, (ptrdiff_t)1, &superb[0]);
    j = (int32_T)info_t;
    f_st.site = &r_emlrtRSI;
    if (j < 0) {
      if (j == -1010) {
        g_st.site = &ab_emlrtRSI;
        error(&g_st);
      } else {
        g_st.site = &bb_emlrtRSI;
        b_error(&g_st, j);
      }
    }

    if (j > 0) {
      d_st.site = &p_emlrtRSI;
      c_error(&d_st);
    }

    y = s[0];
  }

  return y;
}

/* End of code generation (norm.cpp) */
