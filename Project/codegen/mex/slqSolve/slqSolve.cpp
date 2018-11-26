/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * slqSolve.cpp
 *
 * Code generation for function 'slqSolve'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "compute_qN.h"
#include "getDynSys.h"
#include "compute_A.h"
#include "compute_B.h"
#include "compute_q.h"
#include "compute_q_vec.h"
#include "compute_Q_mat.h"
#include "slqSolve_emxutil.h"
#include "inv.h"
#include "compute_r_vec.h"
#include "terminalCost.h"
#include "compute_qN_vec.h"
#include "norm.h"
#include "slqSolve_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 73,  /* lineNo */
  5,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 47,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 48,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 51,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 52,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 55,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 65,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  48,                                  /* colNo */
  "K",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  17,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  78,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  54,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  41,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  19,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  100,                                 /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  83,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  72,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  60,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  15,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  45,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  15,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  28,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  301,                                 /* iLast */
  30,                                  /* lineNo */
  22,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 7,     /* lineNo */
  26,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 8,   /* lineNo */
  37,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 10,  /* lineNo */
  36,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 7,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 8,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  301,                                 /* iLast */
  16,                                  /* lineNo */
  23,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  5,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  5,                                   /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  20,                                  /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  9,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void slqSolve(const emlrtStack *sp, real_T x_bar[3612], real_T u_bar[1200],
              real_T N, real_T dt, const real_T x0[12], const real_T x_wp[3612],
              real_T t_wp, const real_T xf[12], emxArray_real_T *K)
{
  int32_T i4;
  emxArray_real_T *s;
  real_T u_ff[1200];
  int32_T ii;
  emxArray_real_T *s_vec;
  emxArray_real_T *S_mat;
  int32_T i5;
  int32_T i6;
  real_T t;
  static const int32_T iv14[144] = { 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 };

  int32_T k;
  int32_T b_k;
  real_T b_x_bar[3612];
  real_T b_u_bar[1200];
  real_T A[144];
  real_T B[48];
  real_T J;
  real_T q;
  real_T dx[12];
  real_T xhat[12];
  real_T Q_mat[144];
  const mxArray *y;
  const mxArray *m7;
  real_T du[4];
  real_T Wp[144];
  static const int16_T iv15[144] = { 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000 };

  static const int8_T xbar[12] = { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  real_T g[4];
  real_T a[48];
  real_T b_y;
  real_T c_y[12];
  real_T beta1;
  char_T TRANSA;
  char_T TRANSB;
  ptrdiff_t m_t;
  real_T d_y;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T b_a[48];
  real_T e_y[4];
  static const int8_T b[144] = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10 };

  static const int16_T b_b[16] = { 1000, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 1000, 0,
    0, 0, 0, 1000 };

  real_T G[48];
  real_T H[16];
  real_T c_a[16];
  static const int16_T R[16] = { 2000, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 2000, 0, 0,
    0, 0, 2000 };

  real_T d_a[144];
  real_T e_a[144];
  real_T f_y[144];
  real_T b_K[12];
  real_T b_G[12];
  emlrtStack st;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Initialize with arbitrary u_ff above convergence bound */
  for (i4 = 0; i4 < 1200; i4++) {
    u_ff[i4] = 1.0;
  }

  emxInit_real_T1(sp, &s, 1, &c_emlrtRTEI, true);
  i4 = s->size[0];
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &e_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  s->size[0] = (int32_T)N;
  emxEnsureCapacity_real_T(sp, s, i4, &c_emlrtRTEI);
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &e_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  ii = (int32_T)N;
  for (i4 = 0; i4 < ii; i4++) {
    s->data[i4] = 0.0;
  }

  emxInit_real_T2(sp, &s_vec, 2, &d_emlrtRTEI, true);
  i4 = s_vec->size[0] * s_vec->size[1];
  s_vec->size[0] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &emlrtDCI, sp);
  }

  s_vec->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T1(sp, s_vec, i4, &d_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &f_emlrtDCI, sp);
  }

  ii = 12 * (int32_T)N;
  for (i4 = 0; i4 < ii; i4++) {
    s_vec->data[i4] = 0.0;
  }

  emxInit_real_T(sp, &S_mat, 3, &e_emlrtRTEI, true);
  i4 = S_mat->size[0] * S_mat->size[1] * S_mat->size[2];
  S_mat->size[0] = 12;
  S_mat->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &b_emlrtDCI, sp);
  }

  S_mat->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T2(sp, S_mat, i4, &e_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &g_emlrtDCI, sp);
  }

  ii = 144 * (int32_T)N;
  for (i4 = 0; i4 < ii; i4++) {
    S_mat->data[i4] = 0.0;
  }

  i4 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &c_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T2(sp, K, i4, &f_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &h_emlrtDCI, sp);
  }

  ii = 48 * (int32_T)N;
  for (i4 = 0; i4 < ii; i4++) {
    K->data[i4] = 0.0;
  }

  ii = 1;
  do {
    exitg1 = 0;
    st.site = &emlrtRSI;
    if ((norm(&st, u_ff) >= 1.0E-6) && (ii < 2)) {
      /*  Stop if feedforward increment converges */
      /*  Initialize S matrix (coefficients of quadratic functional) */
      i4 = (int32_T)N;
      if (!((i4 >= 1) && (i4 <= 301))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, 301, &r_emlrtBCI, sp);
      }

      i5 = s->size[0];
      i6 = (int32_T)N;
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &s_emlrtBCI, sp);
      }

      s->data[i6 - 1] = compute_qN(*(real_T (*)[12])&x_bar[12 * (i4 - 1)], xf);
      ii = s_vec->size[1];
      i4 = (int32_T)N;
      if (!((i4 >= 1) && (i4 <= ii))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, ii, &t_emlrtBCI, sp);
      }

      compute_qN_vec(*(real_T (*)[12])&x_bar[12 * ((int32_T)N - 1)], xf,
                     *(real_T (*)[12])&s_vec->data[s_vec->size[0] * (i4 - 1)]);
      ii = S_mat->size[2];
      i4 = (int32_T)N;
      if (!((i4 >= 1) && (i4 <= ii))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, ii, &o_emlrtBCI, sp);
      }

      for (i4 = 0; i4 < 12; i4++) {
        for (i5 = 0; i5 < 12; i5++) {
          S_mat->data[(i5 + S_mat->size[0] * i4) + S_mat->size[0] * S_mat->size
            [1] * ((int32_T)N - 1)] = iv14[i5 + 12 * i4];
        }
      }

      /*  Initialize time */
      t = (N - 1.0) * dt;

      /*  Backward propagation */
      i4 = (int32_T)((1.0 + (-1.0 - (N - 1.0))) / -1.0);
      emlrtForLoopVectorCheckR2012b(N - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i4,
        &i_emlrtRTEI, sp);
      k = 0;
      while (k <= i4 - 1) {
        b_k = ((int32_T)N - k) - 2;

        /*  Update time */
        t -= dt;

        /*  Select current state and control vectors */
        i5 = b_k + 1;
        if (!((i5 >= 1) && (i5 <= 301))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 301, &q_emlrtBCI, sp);
        }

        /*  Compute linearized dynamics */
        compute_A(*(real_T (*)[12])&x_bar[12 * b_k], *(real_T (*)[4])&u_bar[b_k <<
                  2], A);
        compute_B(*(real_T (*)[12])&x_bar[12 * b_k], B);

        /*  Compute cost weighting terms */
        q = compute_q(t, *(real_T (*)[12])&x_bar[12 * b_k], *(real_T (*)[4])&
                      u_bar[b_k << 2], *(real_T (*)[4])&u_bar[b_k << 2],
                      *(real_T (*)[12])&x_wp[12 * b_k], t_wp);
        compute_q_vec(t, *(real_T (*)[12])&x_bar[12 * b_k], *(real_T (*)[12])&
                      x_wp[12 * b_k], t_wp, dx);
        compute_Q_mat(t, t_wp, Q_mat);

        /*  Compute grouping terms */
        i5 = s_vec->size[1];
        i6 = (b_k + 1) + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &p_emlrtBCI, sp);
        }

        compute_r_vec(*(real_T (*)[4])&u_bar[b_k << 2], *(real_T (*)[4])&
                      u_bar[b_k << 2], du);
        for (i5 = 0; i5 < 4; i5++) {
          J = 0.0;
          for (i6 = 0; i6 < 12; i6++) {
            J += B[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] * (b_k + 1)];
          }

          g[i5] = du[i5] + J;
        }

        st.site = &h_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i5, &n_emlrtBCI, &st);
        }

        ii = b_k + 2;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            Wp[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
              S_mat->size[0] * S_mat->size[1] * (ii - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &a[0], &lda_t, &Wp[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &b_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &G[0], &ldc_t);
        st.site = &i_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i5, &m_emlrtBCI, &st);
        }

        ii = b_k + 2;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            Wp[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
              S_mat->size[0] * S_mat->size[1] * (ii - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &a[0], &lda_t, &Wp[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            J = 0.0;
            for (ii = 0; ii < 12; ii++) {
              J += b_a[i5 + (ii << 2)] * B[ii + 12 * i6];
            }

            H[i5 + (i6 << 2)] = (real_T)R[i5 + (i6 << 2)] + J;
          }
        }

        /*  Update feedback matrix and feedforward control */
        st.site = &j_emlrtRSI;
        inv(&st, H, c_a);
        for (i5 = 0; i5 < 16; i5++) {
          c_a[i5] = -c_a[i5];
        }

        ii = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= ii))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, ii, &k_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * b_k] =
              0.0;
            for (ii = 0; ii < 4; ii++) {
              K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * b_k] +=
                c_a[i5 + (ii << 2)] * G[ii + (i6 << 2)];
            }
          }
        }

        st.site = &k_emlrtRSI;
        inv(&st, H, c_a);
        for (i5 = 0; i5 < 16; i5++) {
          c_a[i5] = -c_a[i5];
        }

        for (i5 = 0; i5 < 4; i5++) {
          u_ff[i5 + (b_k << 2)] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            u_ff[i5 + (b_k << 2)] += c_a[i5 + (i6 << 2)] * g[i6];
          }
        }

        /*  Update current coefficients of functional */
        st.site = &l_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            d_a[i6 + 12 * i5] = A[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i5, &l_emlrtBCI, &st);
        }

        ii = b_k + 2;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            Wp[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
              S_mat->size[0] * S_mat->size[1] * (ii - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &d_a[0], &lda_t, &Wp[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        i5 = K->size[2];
        i6 = b_k + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &j_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            B[i5 + 12 * i6] = 0.0;
            for (ii = 0; ii < 4; ii++) {
              B[i5 + 12 * i6] += K->data[(ii + K->size[0] * i5) + K->size[0] *
                K->size[1] * b_k] * H[ii + (i6 << 2)];
            }
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i6 + (i5 << 2)];
          }
        }

        i5 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i5, &i_emlrtBCI, sp);
        }

        ii = b_k + 1;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            b_a[i6 + (i5 << 2)] = K->data[(i6 + K->size[0] * i5) + K->size[0] *
              K->size[1] * (ii - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &e_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &f_y[0], &ldc_t);
        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &Wp[0], &ldc_t);
        st.site = &l_emlrtRSI;
        i5 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i5, &h_emlrtBCI, &st);
        }

        ii = b_k + 1;
        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            B[i6 + 12 * i5] = K->data[(i5 + K->size[0] * i6) + K->size[0] *
              K->size[1] * (ii - 1)];
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i6 + (i5 << 2)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &a[0], &lda_t, &G[0],
              &ldb_t, &beta1, &d_a[0], &ldc_t);
        st.site = &l_emlrtRSI;
        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            B[i6 + 12 * i5] = G[i5 + (i6 << 2)];
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i6 + (i5 << 2)];
          }
        }

        i5 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i5, &g_emlrtBCI, &st);
        }

        ii = b_k + 1;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            b_a[i6 + (i5 << 2)] = K->data[(i6 + K->size[0] * i5) + K->size[0] *
              K->size[1] * (ii - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        J = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &J, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        ii = S_mat->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= ii))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, ii, &f_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            S_mat->data[(i6 + S_mat->size[0] * i5) + S_mat->size[0] *
              S_mat->size[1] * b_k] = (((Q_mat[i6 + 12 * i5] + f_y[i6 + 12 * i5])
              + Wp[i6 + 12 * i5]) + d_a[i6 + 12 * i5]) + e_a[i6 + 12 * i5];
          }
        }

        i5 = s_vec->size[1];
        i6 = (b_k + 1) + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &e_emlrtBCI, sp);
        }

        i5 = K->size[2];
        i6 = b_k + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &d_emlrtBCI, sp);
        }

        i5 = K->size[2];
        i6 = b_k + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &c_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            B[i5 + 12 * i6] = 0.0;
            for (ii = 0; ii < 4; ii++) {
              B[i5 + 12 * i6] += K->data[(ii + K->size[0] * i5) + K->size[0] *
                K->size[1] * b_k] * H[ii + (i6 << 2)];
            }
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          J = 0.0;
          for (i6 = 0; i6 < 12; i6++) {
            J += A[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] * (b_k + 1)];
          }

          xhat[i5] = dx[i5] + J;
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_K[i5] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            b_K[i5] += B[i5 + 12 * i6] * u_ff[i6 + (b_k << 2)];
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          J = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            J += K->data[(i6 + K->size[0] * i5) + K->size[0] * K->size[1] * b_k]
              * g[i6];
          }

          dx[i5] = (xhat[i5] + b_K[i5]) + J;
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_G[i5] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            b_G[i5] += G[i6 + (i5 << 2)] * u_ff[i6 + (b_k << 2)];
          }
        }

        ii = s_vec->size[1];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= ii))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, ii, &b_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          s_vec->data[i5 + s_vec->size[0] * b_k] = dx[i5] + b_G[i5];
        }

        b_y = 0.0;
        d_y = 0.0;
        for (ii = 0; ii < 4; ii++) {
          e_y[ii] = 0.0;
          for (i5 = 0; i5 < 4; i5++) {
            e_y[ii] += 0.5 * u_ff[i5 + (b_k << 2)] * H[i5 + (ii << 2)];
          }

          b_y += e_y[ii] * u_ff[ii + (b_k << 2)];
          d_y += u_ff[ii + (b_k << 2)] * g[ii];
        }

        i5 = s->size[0];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i5, &u_emlrtBCI, sp);
        }

        i5 = s->size[0];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i5, &v_emlrtBCI, sp);
        }

        s->data[b_k] = ((q + s->data[b_k + 1]) + b_y) + d_y;

        /*          S_mat(:,:,k) */
        /*          s_vec(:,k) */
        /*          s(k) */
        k++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &m_emlrtRSI;
      memset(&b_x_bar[0], 0, 3612U * sizeof(real_T));
      memset(&b_u_bar[0], 0, 1200U * sizeof(real_T));
      memcpy(&b_x_bar[0], &x0[0], 12U * sizeof(real_T));
      ii = 0;
      while (ii <= (int32_T)N - 2) {
        i4 = K->size[2];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &emlrtBCI, &st);
        }

        for (i4 = 0; i4 < 12; i4++) {
          xhat[i4] = b_x_bar[i4 + 12 * ii] - x_bar[i4 + 12 * ii];
        }

        for (i4 = 0; i4 < 4; i4++) {
          J = 0.0;
          for (i5 = 0; i5 < 12; i5++) {
            J += K->data[(i4 + K->size[0] * i5) + K->size[0] * K->size[1] * ii] *
              xhat[i5];
          }

          b_u_bar[i4 + (ii << 2)] = (u_bar[i4 + (ii << 2)] + u_ff[i4 + (ii << 2)])
            + J;
        }

        /*      u(:,ii) = min(umax, max(umin, u(:,ii))); */
        /*  dq = dynamics(q,u); */
        getDynSys(*(real_T (*)[12])&b_x_bar[12 * ii], *(real_T (*)[4])&
                  b_u_bar[ii << 2], dx);
        for (i4 = 0; i4 < 12; i4++) {
          xhat[i4] = b_x_bar[i4 + 12 * ii] + dx[i4] * dt;
        }

        memcpy(&b_x_bar[ii * 12 + 12], &xhat[0], 12U * sizeof(real_T));
        ii++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      memcpy(&x_bar[0], &b_x_bar[0], 3612U * sizeof(real_T));
      memcpy(&u_bar[0], &b_u_bar[0], 1200U * sizeof(real_T));
      J = terminalCost(*(real_T (*)[12])&b_x_bar[3600], xf);
      t = 0.0;
      k = 0;
      while (k <= (int32_T)N - 2) {
        /*  Q(7:9,7:9) = 0*eye(3); */
        /*  Q(10:12,10:12) = 0*eye(3); */
        /*  ubar = [0;0;0;0]; */
        for (i4 = 0; i4 < 144; i4++) {
          Wp[i4] = iv15[i4];
        }

        for (i4 = 0; i4 < 3; i4++) {
          for (i5 = 0; i5 < 3; i5++) {
            Wp[(i5 + 12 * (3 + i4)) + 3] = iv0[i5 + 3 * i4];
            Wp[(i5 + 12 * (6 + i4)) + 6] = iv0[i5 + 3 * i4];
            Wp[(i5 + 12 * (9 + i4)) + 9] = 0.0;
          }
        }

        for (i4 = 0; i4 < 12; i4++) {
          dx[i4] = b_x_bar[i4 + 12 * k] - (real_T)xbar[i4];
        }

        for (i4 = 0; i4 < 4; i4++) {
          du[i4] = b_u_bar[i4 + (k << 2)] - b_u_bar[i4 + (k << 2)];
        }

        for (i4 = 0; i4 < 12; i4++) {
          xhat[i4] = b_x_bar[i4 + 12 * k] - x_wp[i4 + 12 * k];
        }

        b_y = 0.0;
        for (b_k = 0; b_k < 12; b_k++) {
          c_y[b_k] = 0.0;
          for (i4 = 0; i4 < 12; i4++) {
            c_y[b_k] += xhat[i4] * Wp[i4 + 12 * b_k];
          }

          b_y += c_y[b_k] * xhat[b_k];
        }

        beta1 = t - t_wp;
        d_y = 0.0;
        for (b_k = 0; b_k < 12; b_k++) {
          c_y[b_k] = 0.0;
          for (i4 = 0; i4 < 12; i4++) {
            c_y[b_k] += dx[i4] * (real_T)b[i4 + 12 * b_k];
          }

          d_y += c_y[b_k] * dx[b_k];
        }

        q = 0.0;
        for (b_k = 0; b_k < 4; b_k++) {
          e_y[b_k] = 0.0;
          for (i4 = 0; i4 < 4; i4++) {
            e_y[b_k] += du[i4] * (real_T)b_b[i4 + (b_k << 2)];
          }

          q += e_y[b_k] * du[b_k];
        }

        J += (d_y + q) + b_y * 3.9894228040143269 * muDoubleScalarExp(-50.0 *
          (beta1 * beta1));
        t += dt;
        k++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      y = NULL;
      m7 = emlrtCreateDoubleScalar(J);
      emlrtAssign(&y, m7);
      emlrtDisplayR2012b(y, "J", &emlrtRTEI, sp);

      /*      alpha = 1; */
      /*      Jmin = Inf; */
      /*      % Forward propagate to generate new trajectory */
      /*      for i = 1:5 */
      /*          [x_bar_temp,u_bar_temp] = forwardIntTraj(x0,x_bar,u_bar, alpha*u_ff, K, N,dt); */
      /*  */
      /*          J = terminalCost(x_bar_temp(:,end), xf); */
      /*          t = 0; */
      /*          for k = 1:N-1 */
      /*              J = J + intermediateCost(t,x_bar_temp(:,k),u_bar_temp(:,k),x_bar_temp(:,k),u_bar_temp(:,k), x_wp(:,k),t_wp); */
      /*              t = t+dt; */
      /*          end */
      /*  */
      /*          if J < Jmin */
      /*              Jmin = J; */
      /*              x_bar = x_bar_temp; */
      /*              u_bar = u_bar_temp; */
      /*          end */
      /*  */
      /*          alpha = alpha/2; */
      /*  */
      /*      end */
      /*  */
      /*      Jmin */
      /*  Update algorithm iteration */
      ii = 2;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxFree_real_T(sp, &S_mat);
  emxFree_real_T(sp, &s_vec);
  emxFree_real_T(sp, &s);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (slqSolve.cpp) */
