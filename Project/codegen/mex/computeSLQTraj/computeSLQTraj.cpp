/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTraj.cpp
 *
 * Code generation for function 'computeSLQTraj'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "getDynSys.h"
#include "computeSLQTraj_emxutil.h"
#include "slqSolve.h"
#include "computeSLQTraj_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 32,    /* lineNo */
  "computeSLQTraj",                    /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 37,  /* lineNo */
  "computeSLQTraj",                    /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 11,  /* lineNo */
  "forwardInt",                        /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 16,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 2, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 14,    /* lineNo */
  15,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 14,  /* lineNo */
  15,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo r_emlrtRTEI = { 26,/* lineNo */
  10,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  12,                                  /* colNo */
  "u_ff",                              /* aName */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  11,                                  /* colNo */
  "K",                                 /* aName */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 8, /* lineNo */
  10,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  25,                                  /* colNo */
  "K",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  5,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  34,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  22,                                  /* colNo */
  "u_ff",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  35,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  23,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  31,                                  /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  9,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 16,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 18,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 18,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 2,   /* lineNo */
  14,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 16,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTraj.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  4                                    /* checkKind */
};

/* Function Definitions */
void computeSLQTraj(const emlrtStack *sp, real_T N, real_T dt, const real_T x0
                    [12], const real_T xf[12], real_T t_wp, const real_T x_wp
                    [1812], emxArray_real_T *x, emxArray_real_T *K,
                    emxArray_real_T *u)
{
  emxArray_int8_T *u_ff;
  int32_T i0;
  int32_T loop_ub;
  real_T d0;
  int32_T ii;
  static const real_T K_lqr[48] = { -0.0, 0.0, 1.6111, 0.0, 0.0, -1.6111, 0.0,
    -0.0, 2.6672, 0.0, 0.0, 0.0, 0.0, 9.2114, 0.0, 0.0, -0.0, 0.0, 9.2114, 0.0,
    0.0, 0.0, 0.0, 2.8908, -0.0, 0.0, 2.379, 0.0, 0.0, -2.379, 0.0, -0.0, 2.7075,
    0.0, 0.0, 0.0, 0.0, 1.7455, 0.0, 0.0, -0.0, 0.0, 1.7455, 0.0, 0.0, 0.0, 0.0,
    2.9344 };

  emxArray_real_T *u_fb;
  real_T b_x[12];
  real_T b_K[48];
  int32_T b_ii;
  int32_T c_ii;
  real_T dq[12];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int8_T(sp, &u_ff, 2, &emlrtRTEI, true);

  /*  % Initialize controller with LQR solution */
  /*  Q = 1e3*eye(length(x0)); */
  /*  R = eye(length(u)); */
  /*  A = compute_A(x0,u0); */
  /*  B = compute_B(x0,u0); */
  /*  [K_lqr,S] = dlqr(A,B,Q,R); */
  /*  save('loadK;', 'K_lqr'); */
  /*  temp = load('loadK'); */
  /*  K_lqr = temp.K_lqr; */
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &b_emlrtDCI, sp);
  }

  i0 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &c_emlrtDCI, sp);
  }

  u_ff->size[1] = (int32_T)N;
  emxEnsureCapacity_int8_T(sp, u_ff, i0, &emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &i_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_ff->data[i0] = 0;
  }

  i0 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  d0 = N - 1.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &e_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)d0;
  emxEnsureCapacity_real_T(sp, K, i0, &b_emlrtRTEI);
  d0 = N - 1.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &k_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
  }

  loop_ub = 48 * (int32_T)d0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    K->data[i0] = 0.0;
  }

  /*  From loadK: */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N - 1.0, mxDOUBLE_CLASS, (int32_T)(N -
    1.0), &r_emlrtRTEI, sp);
  ii = 1;
  while (ii - 1 <= (int32_T)(N - 1.0) - 1) {
    loop_ub = u_ff->size[1];
    if (!((ii >= 1) && (ii <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, loop_ub, &emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 4; i0++) {
      u_ff->data[i0 + u_ff->size[0] * (ii - 1)] = 0;
    }

    loop_ub = K->size[2];
    if (!((ii >= 1) && (ii <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, loop_ub, &b_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 12; i0++) {
      for (loop_ub = 0; loop_ub < 4; loop_ub++) {
        K->data[(loop_ub + K->size[0] * i0) + K->size[0] * K->size[1] * (ii - 1)]
          = K_lqr[loop_ub + (i0 << 2)];
      }
    }

    ii++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  Forward simulate to get initial trajectory */
  st.site = &emlrtRSI;
  i0 = x->size[0] * x->size[1];
  x->size[0] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &f_emlrtDCI, &st);
  }

  x->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T1(&st, x, i0, &c_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &l_emlrtDCI, &st);
  }

  loop_ub = 12 * (int32_T)N;
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = 0.0;
  }

  i0 = u->size[0] * u->size[1];
  u->size[0] = 4;
  d0 = N - 1.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &h_emlrtDCI, &st);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, &st);
  }

  u->size[1] = (int32_T)d0;
  emxEnsureCapacity_real_T1(&st, u, i0, &d_emlrtRTEI);
  d0 = N - 1.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &n_emlrtDCI, &st);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &m_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d0 << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u->data[i0] = 0.0;
  }

  emxInit_real_T(&st, &u_fb, 2, &e_emlrtRTEI, true);
  i0 = u_fb->size[0] * u_fb->size[1];
  u_fb->size[0] = 4;
  u_fb->size[1] = (int32_T)(N - 1.0);
  emxEnsureCapacity_real_T1(&st, u_fb, i0, &e_emlrtRTEI);
  loop_ub = (int32_T)(N - 1.0) << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_fb->data[i0] = 0.0;
  }

  i0 = (int32_T)N;
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &d_emlrtBCI, &st);
  }

  for (i0 = 0; i0 < 12; i0++) {
    x->data[i0] = x0[i0];
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N - 1.0, mxDOUBLE_CLASS, (int32_T)(N -
    1.0), &s_emlrtRTEI, &st);
  ii = 0;
  while (ii <= (int32_T)(N - 1.0) - 1) {
    i0 = K->size[2];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &c_emlrtBCI, &st);
    }

    i0 = x->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &e_emlrtBCI, &st);
    }

    for (i0 = 0; i0 < 12; i0++) {
      for (loop_ub = 0; loop_ub < 4; loop_ub++) {
        b_K[loop_ub + (i0 << 2)] = -K->data[(loop_ub + K->size[0] * i0) +
          K->size[0] * K->size[1] * ii];
      }
    }

    for (i0 = 0; i0 < 12; i0++) {
      b_x[i0] = x->data[i0 + x->size[0] * ii] - xf[i0];
    }

    loop_ub = u_fb->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, loop_ub, &k_emlrtBCI, &st);
    }

    for (i0 = 0; i0 < 4; i0++) {
      u_fb->data[i0 + u_fb->size[0] * ii] = 0.0;
      for (loop_ub = 0; loop_ub < 12; loop_ub++) {
        u_fb->data[i0 + u_fb->size[0] * ii] += b_K[i0 + (loop_ub << 2)] *
          b_x[loop_ub];
      }
    }

    i0 = u_ff->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i0, &f_emlrtBCI, &st);
    }

    b_ii = ii + 1;
    i0 = u_fb->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i0, &g_emlrtBCI, &st);
    }

    c_ii = ii + 1;
    loop_ub = u->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, loop_ub, &h_emlrtBCI, &st);
    }

    for (i0 = 0; i0 < 4; i0++) {
      u->data[i0 + u->size[0] * ii] = (real_T)u_ff->data[i0 + u_ff->size[0] *
        (b_ii - 1)] + u_fb->data[i0 + u_fb->size[0] * (c_ii - 1)];
    }

    b_st.site = &c_emlrtRSI;
    i0 = x->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &i_emlrtBCI, &b_st);
    }

    i0 = u->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &j_emlrtBCI, &b_st);
    }

    /*  dq = dynamics(q,u); */
    getDynSys(*(real_T (*)[12])&x->data[x->size[0] * ii], *(real_T (*)[4])&
              u->data[u->size[0] * ii], dq);
    loop_ub = x->size[1];
    i0 = (int32_T)((1.0 + (real_T)ii) + 1.0);
    if (!((i0 >= 1) && (i0 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &l_emlrtBCI, &b_st);
    }

    for (i0 = 0; i0 < 12; i0++) {
      b_x[i0] = x->data[i0 + x->size[0] * ii] + dq[i0] * dt;
    }

    for (i0 = 0; i0 < 12; i0++) {
      x->data[i0 + x->size[0] * ((int32_T)((1.0 + (real_T)ii) + 1.0) - 1)] =
        b_x[i0];
    }

    ii++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(&st, &u_fb);
  emxFree_int8_T(&st, &u_ff);

  /*  x = x_bar; */
  /*  u = u_ff; */
  /*  Execute SLQ solve to generate optimal trajectory and control */
  st.site = &b_emlrtRSI;
  slqSolve(&st, x, u, N, dt, x0, x_wp, t_wp, xf, K);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (computeSLQTraj.cpp) */
