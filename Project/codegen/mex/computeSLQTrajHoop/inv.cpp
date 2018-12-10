/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.cpp
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "inv.h"
#include "warning.h"
#include "norm.h"
#include "eml_int_forloop_overflow_check.h"
#include "computeSLQTrajHoop_mexutil.h"
#include "computeSLQTrajHoop_data.h"

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+refblas/xger.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 41, /* lineNo */
  "xgerx",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 59, /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 51, /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+refblas/xtrsm.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtRSInfo td_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m13;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m13, 2, pArrays, "sprintf", true,
    location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "char",
    false, 2U, *(int32_T (*)[2])&dims[0]);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void inv(const emlrtStack *sp, const real_T x[16], real_T y[16])
{
  real_T b_x[16];
  int8_T ipiv[4];
  int32_T j;
  int32_T b;
  int32_T jj;
  int8_T p[4];
  int32_T jp1j;
  int32_T n;
  int32_T jy;
  int32_T ix;
  real_T smax;
  int32_T iy;
  real_T s;
  int32_T ijA;
  real_T rc;
  const mxArray *b_y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  char_T cv0[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bd_emlrtRSI;
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
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  memset(&y[0], 0, sizeof(real_T) << 4);
  b_st.site = &dd_emlrtRSI;
  memcpy(&b_x[0], &x[0], sizeof(real_T) << 4);
  c_st.site = &fd_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (j = 0; j < 3; j++) {
    b = j * 5;
    jj = j * 5;
    jp1j = b + 2;
    n = 4 - j;
    jy = 0;
    ix = b;
    smax = muDoubleScalarAbs(b_x[b]);
    for (iy = 2; iy <= n; iy++) {
      ix++;
      s = muDoubleScalarAbs(b_x[ix]);
      if (s > smax) {
        jy = iy - 1;
        smax = s;
      }
    }

    if (b_x[jj + jy] != 0.0) {
      if (jy != 0) {
        iy = j + jy;
        ipiv[j] = (int8_T)(iy + 1);
        smax = b_x[j];
        b_x[j] = b_x[iy];
        b_x[iy] = smax;
        ix = j + 4;
        iy += 4;
        smax = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = smax;
        ix += 4;
        iy += 4;
        smax = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = smax;
        ix += 4;
        iy += 4;
        smax = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = smax;
      }

      jy = (jj - j) + 4;
      d_st.site = &gd_emlrtRSI;
      for (n = jp1j; n <= jy; n++) {
        b_x[n - 1] /= b_x[jj];
      }
    }

    n = 2 - j;
    jy = b + 4;
    d_st.site = &hd_emlrtRSI;
    e_st.site = &id_emlrtRSI;
    f_st.site = &jd_emlrtRSI;
    g_st.site = &kd_emlrtRSI;
    iy = jj + 6;
    h_st.site = &md_emlrtRSI;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = b_x[jy];
      if (b_x[jy] != 0.0) {
        ix = jj + 1;
        b = (iy - j) + 2;
        h_st.site = &ld_emlrtRSI;
        if ((iy <= b) && (b > 2147483646)) {
          i_st.site = &jb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (ijA = iy; ijA <= b; ijA++) {
          b_x[ijA - 1] += b_x[ix] * -smax;
          ix++;
        }
      }

      jy += 4;
      iy += 4;
    }
  }

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    jy = ipiv[0] - 1;
    iy = p[jy];
    p[jy] = 1;
    p[0] = (int8_T)iy;
  }

  if (ipiv[1] > 2) {
    jy = ipiv[1] - 1;
    iy = p[jy];
    p[jy] = p[1];
    p[1] = (int8_T)iy;
  }

  if (ipiv[2] > 3) {
    jy = ipiv[2] - 1;
    iy = p[jy];
    p[jy] = p[2];
    p[2] = (int8_T)iy;
  }

  jy = p[0] - 1;
  ijA = jy << 2;
  y[ijA] = 1.0;
  for (j = 1; j < 5; j++) {
    if (y[(j + ijA) - 1] != 0.0) {
      iy = j + 1;
      for (n = iy; n < 5; n++) {
        jp1j = (n + ijA) - 1;
        y[jp1j] -= y[(j + (jy << 2)) - 1] * b_x[(n + ((j - 1) << 2)) - 1];
      }
    }
  }

  jy = p[1] - 1;
  ijA = jy << 2;
  y[1 + ijA] = 1.0;
  for (j = 2; j < 5; j++) {
    if (y[(j + ijA) - 1] != 0.0) {
      iy = j + 1;
      for (n = iy; n < 5; n++) {
        jp1j = (n + ijA) - 1;
        y[jp1j] -= y[(j + (jy << 2)) - 1] * b_x[(n + ((j - 1) << 2)) - 1];
      }
    }
  }

  jy = p[2] - 1;
  ijA = jy << 2;
  y[2 + ijA] = 1.0;
  for (j = 3; j < 5; j++) {
    if (y[(j + ijA) - 1] != 0.0) {
      iy = j + 1;
      for (n = iy; n < 5; n++) {
        jp1j = ijA + 3;
        y[jp1j] -= y[(j + (jy << 2)) - 1] * b_x[((j - 1) << 2) + 3];
      }
    }
  }

  y[3 + ((p[3] - 1) << 2)] = 1.0;
  b_st.site = &ed_emlrtRSI;
  c_st.site = &nd_emlrtRSI;
  for (j = 0; j < 4; j++) {
    jy = j << 2;
    smax = y[3 + jy];
    if (smax != 0.0) {
      y[3 + jy] = smax / b_x[15];
      d_st.site = &od_emlrtRSI;
      for (n = 0; n < 3; n++) {
        ijA = n + jy;
        y[ijA] -= y[3 + jy] * b_x[n + 12];
      }
    }

    smax = y[2 + jy];
    if (smax != 0.0) {
      y[2 + jy] = smax / b_x[10];
      d_st.site = &od_emlrtRSI;
      for (n = 0; n < 2; n++) {
        y[n + jy] -= y[2 + jy] * b_x[n + 8];
      }
    }

    smax = y[1 + jy];
    if (smax != 0.0) {
      y[1 + jy] = smax / b_x[5];
      d_st.site = &od_emlrtRSI;
      for (n = 0; n < 1; n++) {
        y[jy] -= y[1 + jy] * b_x[4];
      }
    }

    if (y[jy] != 0.0) {
      y[jy] /= b_x[0];
      d_st.site = &od_emlrtRSI;
    }
  }

  st.site = &cd_emlrtRSI;
  smax = c_norm(x);
  s = c_norm(y);
  rc = 1.0 / (smax * s);
  if ((smax == 0.0) || (s == 0.0) || (rc == 0.0)) {
    b_st.site = &pd_emlrtRSI;
    warning(&b_st);
  } else {
    if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &qd_emlrtRSI;
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(&b_st, 6, m0, (char_T *)&rfmt[0]);
      emlrtAssign(&b_y, m0);
      c_st.site = &td_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, emlrt_marshallOut(rc),
        &c_emlrtMCI), "sprintf", cv0);
      b_st.site = &qd_emlrtRSI;
      b_warning(&b_st, cv0);
    }
  }
}

/* End of code generation (inv.cpp) */
