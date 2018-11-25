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
#include "compute_q.h"
#include "compute_q_vec.h"
#include "compute_Q_mat.h"
#include "slqSolve_emxutil.h"
#include "inv.h"
#include "compute_r_vec.h"
#include "compute_qN_vec.h"
#include "compute_qN.h"
#include "norm.h"
#include "slqSolve_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 47,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 48,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 51,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 52,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 55,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 61,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  301,                                 /* iLast */
  30,                                  /* lineNo */
  22,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  28,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  15,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  45,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  15,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  60,                                  /* colNo */
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
  83,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  100,                                 /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  19,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  41,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  54,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  78,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  17,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  48,                                  /* colNo */
  "K",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
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
void slqSolve(const emlrtStack *sp, real_T x_bar[3612], real_T u_bar[1800],
              real_T N, real_T dt, const real_T x0[12], const real_T x_wp[3612],
              real_T t_wp, const real_T xf[12], emxArray_real_T *K)
{
  int32_T i1;
  emxArray_real_T *s;
  real_T u_ff[1800];
  int32_T loop_ub;
  emxArray_real_T *s_vec;
  emxArray_real_T *S_mat;
  int32_T ii;
  int32_T i2;
  int32_T i3;
  real_T t;
  static const int16_T iv11[144] = { 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20000 };

  int32_T k;
  int32_T b_k;
  real_T b_x_bar[3612];
  real_T b_u_bar[1800];
  real_T q;
  real_T dq[12];
  real_T Q_mat[144];
  real_T c_x_bar[12];
  real_T alpha1;
  real_T g[6];
  real_T y[6];
  static const real_T a[72] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.01 };

  real_T b[144];
  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T b_a[72];
  static const real_T b_b[144] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  real_T G[72];
  real_T H[36];
  real_T c_a[36];
  static const int8_T R[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  static const real_T c_b[72] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.01 };

  static const real_T d_a[144] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  real_T e_a[144];
  real_T b_K[72];
  real_T b_y[144];
  real_T c_y[144];
  real_T c_K[12];
  real_T b_G[12];
  emlrtStack st;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Initialize with arbitrary u_ff above convergence bound */
  for (i1 = 0; i1 < 1800; i1++) {
    u_ff[i1] = 1.0;
  }

  emxInit_real_T1(sp, &s, 1, &b_emlrtRTEI, true);
  i1 = s->size[0];
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &e_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  s->size[0] = (int32_T)N;
  emxEnsureCapacity_real_T(sp, s, i1, &b_emlrtRTEI);
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &e_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N;
  for (i1 = 0; i1 < loop_ub; i1++) {
    s->data[i1] = 0.0;
  }

  emxInit_real_T2(sp, &s_vec, 2, &c_emlrtRTEI, true);
  i1 = s_vec->size[0] * s_vec->size[1];
  s_vec->size[0] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &emlrtDCI, sp);
  }

  s_vec->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T1(sp, s_vec, i1, &c_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &f_emlrtDCI, sp);
  }

  loop_ub = 12 * (int32_T)N;
  for (i1 = 0; i1 < loop_ub; i1++) {
    s_vec->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &S_mat, 3, &d_emlrtRTEI, true);
  i1 = S_mat->size[0] * S_mat->size[1] * S_mat->size[2];
  S_mat->size[0] = 12;
  S_mat->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &b_emlrtDCI, sp);
  }

  S_mat->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T2(sp, S_mat, i1, &d_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &g_emlrtDCI, sp);
  }

  loop_ub = 144 * (int32_T)N;
  for (i1 = 0; i1 < loop_ub; i1++) {
    S_mat->data[i1] = 0.0;
  }

  i1 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 6;
  K->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &c_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T2(sp, K, i1, &e_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &h_emlrtDCI, sp);
  }

  loop_ub = 72 * (int32_T)N;
  for (i1 = 0; i1 < loop_ub; i1++) {
    K->data[i1] = 0.0;
  }

  ii = 1;
  do {
    exitg1 = 0;
    st.site = &emlrtRSI;
    if ((norm(&st, u_ff) >= 1.0E-6) && (ii < 6)) {
      /*  Stop if feedforward increment converges */
      /*  Initialize S matrix (coefficients of quadratic functional) */
      i1 = (int32_T)N;
      if (!((i1 >= 1) && (i1 <= 301))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 301, &r_emlrtBCI, sp);
      }

      i2 = s->size[0];
      i3 = (int32_T)N;
      if (!((i3 >= 1) && (i3 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &s_emlrtBCI, sp);
      }

      s->data[i3 - 1] = compute_qN(*(real_T (*)[12])&x_bar[12 * (i1 - 1)], xf);
      loop_ub = s_vec->size[1];
      i1 = (int32_T)N;
      if (!((i1 >= 1) && (i1 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &t_emlrtBCI, sp);
      }

      compute_qN_vec(*(real_T (*)[12])&x_bar[12 * ((int32_T)N - 1)], xf,
                     *(real_T (*)[12])&s_vec->data[s_vec->size[0] * (i1 - 1)]);
      loop_ub = S_mat->size[2];
      i1 = (int32_T)N;
      if (!((i1 >= 1) && (i1 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &c_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 12; i1++) {
        for (i2 = 0; i2 < 12; i2++) {
          S_mat->data[(i2 + S_mat->size[0] * i1) + S_mat->size[0] * S_mat->size
            [1] * ((int32_T)N - 1)] = iv11[i2 + 12 * i1];
        }
      }

      /*  Initialize time */
      t = (N - 1.0) * dt;

      /*  Backward propagation */
      i1 = (int32_T)((1.0 + (-1.0 - (N - 1.0))) / -1.0);
      emlrtForLoopVectorCheckR2012b(N - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i1,
        &h_emlrtRTEI, sp);
      k = 0;
      while (k <= i1 - 1) {
        b_k = ((int32_T)N - k) - 2;

        /*  Update time */
        t -= dt;

        /*  Select current state and control vectors */
        i2 = b_k + 1;
        if (!((i2 >= 1) && (i2 <= 301))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 301, &emlrtBCI, sp);
        }

        /*  Compute linearized dynamics */
        /*  Compute cost weighting terms */
        q = compute_q(t, *(real_T (*)[12])&x_bar[12 * b_k], *(real_T (*)[6])&
                      u_bar[6 * b_k], *(real_T (*)[12])&x_bar[12 * b_k],
                      *(real_T (*)[6])&u_bar[6 * b_k], *(real_T (*)[12])&x_wp[12
                      * b_k], t_wp);
        compute_q_vec(t, *(real_T (*)[12])&x_bar[12 * b_k], *(real_T (*)[12])&
                      x_bar[12 * b_k], *(real_T (*)[12])&x_wp[12 * b_k], t_wp,
                      dq);
        compute_Q_mat(t, t_wp, Q_mat);

        /*  Compute grouping terms */
        i2 = s_vec->size[1];
        i3 = (b_k + 1) + 1;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &b_emlrtBCI, sp);
        }

        compute_r_vec(*(real_T (*)[6])&u_bar[6 * b_k], *(real_T (*)[6])&u_bar[6 *
                      b_k], g);
        for (i2 = 0; i2 < 6; i2++) {
          y[i2] = g[i2];
        }

        for (i2 = 0; i2 < 6; i2++) {
          alpha1 = 0.0;
          for (i3 = 0; i3 < 12; i3++) {
            alpha1 += a[i2 + 6 * i3] * s_vec->data[i3 + s_vec->size[0] * (b_k +
              1)];
          }

          g[i2] = y[i2] + alpha1;
        }

        st.site = &e_emlrtRSI;
        i2 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i2, &d_emlrtBCI, &st);
        }

        loop_ub = b_k + 2;
        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            b[i3 + 12 * i2] = S_mat->data[(i3 + S_mat->size[0] * i2) +
              S_mat->size[0] * S_mat->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)6;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)6;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)6;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, (real_T *)&a[0],
              &lda_t, &b[0], &ldb_t, &beta1, &b_a[0], &ldc_t);
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)6;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)6;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)6;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t,
              (real_T *)&b_b[0], &ldb_t, &beta1, &G[0], &ldc_t);
        st.site = &f_emlrtRSI;
        i2 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i2, &e_emlrtBCI, &st);
        }

        loop_ub = b_k + 2;
        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            b[i3 + 12 * i2] = S_mat->data[(i3 + S_mat->size[0] * i2) +
              S_mat->size[0] * S_mat->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)6;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)6;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)6;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, (real_T *)&a[0],
              &lda_t, &b[0], &ldb_t, &beta1, &b_a[0], &ldc_t);
        for (i2 = 0; i2 < 6; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            alpha1 = 0.0;
            for (loop_ub = 0; loop_ub < 12; loop_ub++) {
              alpha1 += b_a[i2 + 6 * loop_ub] * c_b[loop_ub + 12 * i3];
            }

            H[i2 + 6 * i3] = (real_T)R[i2 + 6 * i3] + alpha1;
          }
        }

        /*  Update feedback matrix and feedforward control */
        st.site = &g_emlrtRSI;
        inv(&st, H, c_a);
        for (i2 = 0; i2 < 36; i2++) {
          c_a[i2] = -c_a[i2];
        }

        loop_ub = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, loop_ub, &g_emlrtBCI, sp);
        }

        for (i2 = 0; i2 < 6; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            K->data[(i2 + K->size[0] * i3) + K->size[0] * K->size[1] * b_k] =
              0.0;
            for (loop_ub = 0; loop_ub < 6; loop_ub++) {
              K->data[(i2 + K->size[0] * i3) + K->size[0] * K->size[1] * b_k] +=
                c_a[i2 + 6 * loop_ub] * G[loop_ub + 6 * i3];
            }
          }
        }

        st.site = &h_emlrtRSI;
        inv(&st, H, c_a);
        for (i2 = 0; i2 < 36; i2++) {
          c_a[i2] = -c_a[i2];
        }

        for (i2 = 0; i2 < 6; i2++) {
          u_ff[i2 + 6 * b_k] = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            u_ff[i2 + 6 * b_k] += c_a[i2 + 6 * i3] * g[i3];
          }
        }

        /*  Update current coefficients of functional */
        st.site = &i_emlrtRSI;
        i2 = S_mat->size[2];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i2, &f_emlrtBCI, &st);
        }

        loop_ub = b_k + 2;
        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            b[i3 + 12 * i2] = S_mat->data[(i3 + S_mat->size[0] * i2) +
              S_mat->size[0] * S_mat->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, (real_T *)&d_a[0],
              &lda_t, &b[0], &ldb_t, &beta1, &e_a[0], &ldc_t);
        i2 = K->size[2];
        i3 = b_k + 1;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &h_emlrtBCI, sp);
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_K[i2 + 12 * i3] = 0.0;
            for (loop_ub = 0; loop_ub < 6; loop_ub++) {
              b_K[i2 + 12 * i3] += K->data[(loop_ub + K->size[0] * i2) + K->
                size[0] * K->size[1] * b_k] * H[loop_ub + 6 * i3];
            }
          }
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_a[i3 + 6 * i2] = b_K[i3 + 6 * i2];
          }
        }

        i2 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i2, &i_emlrtBCI, sp);
        }

        loop_ub = b_k + 1;
        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_K[i3 + 6 * i2] = K->data[(i3 + K->size[0] * i2) + K->size[0] *
              K->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &e_a[0], &lda_t,
              (real_T *)&b_b[0], &ldb_t, &beta1, &b_y[0], &ldc_t);
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)6;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)6;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t,
              &b_K[0], &ldb_t, &beta1, &b[0], &ldc_t);
        st.site = &i_emlrtRSI;
        i2 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i2, &j_emlrtBCI, &st);
        }

        loop_ub = b_k + 1;
        for (i2 = 0; i2 < 6; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            b_K[i3 + 12 * i2] = K->data[(i2 + K->size[0] * i3) + K->size[0] *
              K->size[1] * (loop_ub - 1)];
          }
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_a[i3 + 6 * i2] = b_K[i3 + 6 * i2];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)6;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)6;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &G[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        st.site = &i_emlrtRSI;
        for (i2 = 0; i2 < 6; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            b_K[i3 + 12 * i2] = G[i2 + 6 * i3];
          }
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_a[i3 + 6 * i2] = b_K[i3 + 6 * i2];
          }
        }

        i2 = K->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i2, &k_emlrtBCI, &st);
        }

        loop_ub = b_k + 1;
        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_K[i3 + 6 * i2] = K->data[(i3 + K->size[0] * i2) + K->size[0] *
              K->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)6;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)6;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t,
              &b_K[0], &ldb_t, &beta1, &c_y[0], &ldc_t);
        loop_ub = S_mat->size[2];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, loop_ub, &l_emlrtBCI, sp);
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 12; i3++) {
            S_mat->data[(i3 + S_mat->size[0] * i2) + S_mat->size[0] *
              S_mat->size[1] * b_k] = (((Q_mat[i3 + 12 * i2] + b_y[i3 + 12 * i2])
              + b[i3 + 12 * i2]) + e_a[i3 + 12 * i2]) + c_y[i3 + 12 * i2];
          }
        }

        i2 = s_vec->size[1];
        i3 = (b_k + 1) + 1;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &m_emlrtBCI, sp);
        }

        i2 = K->size[2];
        i3 = b_k + 1;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &n_emlrtBCI, sp);
        }

        i2 = K->size[2];
        i3 = b_k + 1;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &o_emlrtBCI, sp);
        }

        for (i2 = 0; i2 < 12; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            b_K[i2 + 12 * i3] = 0.0;
            for (loop_ub = 0; loop_ub < 6; loop_ub++) {
              b_K[i2 + 12 * i3] += K->data[(loop_ub + K->size[0] * i2) + K->
                size[0] * K->size[1] * b_k] * H[loop_ub + 6 * i3];
            }
          }
        }

        for (i2 = 0; i2 < 12; i2++) {
          alpha1 = 0.0;
          for (i3 = 0; i3 < 12; i3++) {
            alpha1 += d_a[i2 + 12 * i3] * s_vec->data[i3 + s_vec->size[0] * (b_k
              + 1)];
          }

          c_x_bar[i2] = dq[i2] + alpha1;
        }

        for (i2 = 0; i2 < 12; i2++) {
          c_K[i2] = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            c_K[i2] += b_K[i2 + 12 * i3] * u_ff[i3 + 6 * b_k];
          }
        }

        for (i2 = 0; i2 < 12; i2++) {
          alpha1 = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            alpha1 += K->data[(i3 + K->size[0] * i2) + K->size[0] * K->size[1] *
              b_k] * g[i3];
          }

          dq[i2] = (c_x_bar[i2] + c_K[i2]) + alpha1;
        }

        for (i2 = 0; i2 < 12; i2++) {
          b_G[i2] = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            b_G[i2] += G[i3 + 6 * i2] * u_ff[i3 + 6 * b_k];
          }
        }

        loop_ub = s_vec->size[1];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, loop_ub, &p_emlrtBCI, sp);
        }

        for (i2 = 0; i2 < 12; i2++) {
          s_vec->data[i2 + s_vec->size[0] * b_k] = dq[i2] + b_G[i2];
        }

        alpha1 = 0.0;
        beta1 = 0.0;
        for (loop_ub = 0; loop_ub < 6; loop_ub++) {
          y[loop_ub] = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            y[loop_ub] += 0.5 * u_ff[i2 + 6 * b_k] * H[i2 + 6 * loop_ub];
          }

          alpha1 += y[loop_ub] * u_ff[loop_ub + 6 * b_k];
          beta1 += u_ff[loop_ub + 6 * b_k] * g[loop_ub];
        }

        i2 = s->size[0];
        if (!((b_k + 2 >= 1) && (b_k + 2 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 2, 1, i2, &u_emlrtBCI, sp);
        }

        i2 = s->size[0];
        if (!((b_k + 1 >= 1) && (b_k + 1 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, i2, &v_emlrtBCI, sp);
        }

        s->data[b_k] = ((q + s->data[b_k + 1]) + alpha1) + beta1;
        k++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Forward propagate to generate new trajectory */
      st.site = &j_emlrtRSI;
      memset(&b_x_bar[0], 0, 3612U * sizeof(real_T));
      memset(&b_u_bar[0], 0, 1800U * sizeof(real_T));
      memcpy(&b_x_bar[0], &x0[0], 12U * sizeof(real_T));
      loop_ub = 0;
      while (loop_ub <= (int32_T)N - 2) {
        i1 = K->size[2];
        i2 = loop_ub + 1;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, &st);
        }

        for (i1 = 0; i1 < 12; i1++) {
          c_x_bar[i1] = b_x_bar[i1 + 12 * loop_ub] - x_bar[i1 + 12 * loop_ub];
        }

        for (i1 = 0; i1 < 6; i1++) {
          alpha1 = 0.0;
          for (i2 = 0; i2 < 12; i2++) {
            alpha1 += K->data[(i1 + K->size[0] * i2) + K->size[0] * K->size[1] *
              loop_ub] * c_x_bar[i2];
          }

          b_u_bar[i1 + 6 * loop_ub] = (u_bar[i1 + 6 * loop_ub] + u_ff[i1 + 6 *
            loop_ub]) + alpha1;
        }

        memset(&dq[0], 0, 12U * sizeof(real_T));

        /*  q - q: hack to get column vector of zeros of correct type */
        for (i1 = 0; i1 < 6; i1++) {
          dq[i1] = b_x_bar[(i1 + 12 * loop_ub) + 6];
          dq[6 + i1] = b_u_bar[i1 + 6 * loop_ub];
        }

        dq[8] -= 9.81;
        for (i1 = 0; i1 < 12; i1++) {
          c_x_bar[i1] = b_x_bar[i1 + 12 * loop_ub] + dq[i1] * dt;
        }

        memcpy(&b_x_bar[loop_ub * 12 + 12], &c_x_bar[0], 12U * sizeof(real_T));
        loop_ub++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      memcpy(&x_bar[0], &b_x_bar[0], 3612U * sizeof(real_T));
      memcpy(&u_bar[0], &b_u_bar[0], 1800U * sizeof(real_T));
      loop_ub = 0;
      while (loop_ub <= (int32_T)N - 2) {
        loop_ub++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Update algorithm iteration */
      ii++;
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
