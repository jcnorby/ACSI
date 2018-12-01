/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTrajHoop.cpp
 *
 * Code generation for function 'computeSLQTrajHoop'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "getDynSys.h"
#include "computeSLQTrajHoop_emxutil.h"
#include "slqSolve.h"
#include "computeSLQTrajHoop_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 14,    /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 44,  /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 49,  /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 11,  /* lineNo */
  "forwardInt",                        /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 2, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  9,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  31,                                  /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  23,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  35,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  22,                                  /* colNo */
  "u_ff",                              /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  34,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  5,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  25,                                  /* colNo */
  "K",                                 /* aName */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 8, /* lineNo */
  10,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  11,                                  /* colNo */
  "K",                                 /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  12,                                  /* colNo */
  "u_ff",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = { 38,/* lineNo */
  10,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 26,    /* lineNo */
  15,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  14,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  14,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  8,                                   /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = { 7, /* lineNo */
  9,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 2,   /* lineNo */
  26,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 2,   /* lineNo */
  26,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 28,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 2,   /* lineNo */
  14,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 28,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardInt.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  10,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void computeSLQTrajHoop(const emlrtStack *sp, real_T N, real_T dt, const real_T
  x0[12], const real_T xf[12], const real_T x0_wp[3], const real_T dx0_wp[3],
  const real_T ddx0_wp[3], boolean_T flag_wp, emxArray_real_T *x,
  emxArray_real_T *K, emxArray_real_T *u, real_T *t_wp, emxArray_real_T *x_wp)
{
  int32_T i0;
  int32_T loop_ub;
  real_T t;
  int32_T i;
  emxArray_int8_T *u_ff;
  real_T c;
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
  real_T dq[12];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i0 = x_wp->size[0] * x_wp->size[1];
  x_wp->size[0] = 12;
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &c_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &b_emlrtDCI, sp);
  }

  x_wp->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T(sp, x_wp, i0, &emlrtRTEI);
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &k_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &j_emlrtDCI, sp);
  }

  loop_ub = 12 * (int32_T)N;
  for (i0 = 0; i0 < loop_ub; i0++) {
    x_wp->data[i0] = 0.0;
  }

  /*  Define waypoint trajectories */
  t = 0.0;
  *t_wp = -1.0;
  i0 = (int32_T)N;
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &o_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 3; i0++) {
    x_wp->data[i0] = x0_wp[i0];
  }

  x_wp->data[3] = 0.0;
  x_wp->data[4] = 0.0;
  x_wp->data[5] = 0.0;
  x_wp->data[6] = 0.0;
  x_wp->data[7] = 2.0 * muDoubleScalarSign(xf[0] - x0[0]);
  x_wp->data[8] = 0.0;
  x_wp->data[9] = 0.0;
  x_wp->data[10] = 0.0;
  x_wp->data[11] = 0.0;
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)(N + -1.0),
    &u_emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)(N + -1.0) - 1) {
    /*          x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0; */
    /*              1;1;0;0;0;0]; */
    /*          x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0; */
    /*              1;1;0;0;0;0]; */
    t += dt;
    st.site = &emlrtRSI;
    c = t * t;
    loop_ub = x_wp->size[1];
    i0 = (int32_T)(2.0 + (real_T)i);
    if (!((i0 >= 1) && (i0 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &n_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      x_wp->data[i0 + x_wp->size[0] * ((i + 2) - 1)] = (x0_wp[i0] + dx0_wp[i0] *
        t) + 0.5 * ddx0_wp[i0] * c;
    }

    loop_ub = x_wp->size[1];
    i0 = (int32_T)(2.0 + (real_T)i);
    if (!((i0 >= 1) && (i0 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &m_emlrtBCI, sp);
    }

    x_wp->data[6 + x_wp->size[0] * ((i + 2) - 1)] = 0.0;
    x_wp->data[7 + x_wp->size[0] * ((i + 2) - 1)] = 2.0 * muDoubleScalarSign(xf
      [1] - x0[1]);
    x_wp->data[8 + x_wp->size[0] * ((i + 2) - 1)] = 0.0;
    i0 = x_wp->size[1];
    loop_ub = (int32_T)(2.0 + (real_T)i);
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &p_emlrtBCI, sp);
    }

    if (((x_wp->data[2 + x_wp->size[0] * (loop_ub - 1)] <= 0.9) || (t >= N / 2.0
          * dt)) && (*t_wp < 0.0) && flag_wp) {
      *t_wp = t;
    }

    /*      if abs(t - t_wp)<1e-4 */
    /*          i_wp = i; */
    /*      end */
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_int8_T(sp, &u_ff, 2, &b_emlrtRTEI, true);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &emlrtDCI, sp);
  }

  i0 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  u_ff->size[1] = (int32_T)N;
  emxEnsureCapacity_int8_T(sp, u_ff, i0, &b_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &l_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_ff->data[i0] = 0;
  }

  i0 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  t = N - 1.0;
  if (!(t >= 0.0)) {
    emlrtNonNegativeCheckR2012b(t, &f_emlrtDCI, sp);
  }

  if (t != (int32_T)muDoubleScalarFloor(t)) {
    emlrtIntegerCheckR2012b(t, &e_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)t;
  emxEnsureCapacity_real_T1(sp, K, i0, &c_emlrtRTEI);
  t = N - 1.0;
  if (!(t >= 0.0)) {
    emlrtNonNegativeCheckR2012b(t, &n_emlrtDCI, sp);
  }

  if (t != (int32_T)muDoubleScalarFloor(t)) {
    emlrtIntegerCheckR2012b(t, &m_emlrtDCI, sp);
  }

  loop_ub = 48 * (int32_T)t;
  for (i0 = 0; i0 < loop_ub; i0++) {
    K->data[i0] = 0.0;
  }

  /*  From loadK: */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N - 1.0, mxDOUBLE_CLASS, (int32_T)(N -
    1.0), &t_emlrtRTEI, sp);
  ii = 1;
  while (ii - 1 <= (int32_T)(N - 1.0) - 1) {
    loop_ub = u_ff->size[1];
    if (!((ii >= 1) && (ii <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, loop_ub, &l_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 4; i0++) {
      u_ff->data[i0 + u_ff->size[0] * (ii - 1)] = 0;
    }

    loop_ub = K->size[2];
    if (!((ii >= 1) && (ii <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, loop_ub, &k_emlrtBCI, sp);
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
  st.site = &b_emlrtRSI;
  i0 = x->size[0] * x->size[1];
  x->size[0] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &g_emlrtDCI, &st);
  }

  x->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T(&st, x, i0, &d_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &o_emlrtDCI, &st);
  }

  loop_ub = 12 * (int32_T)N;
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = 0.0;
  }

  i0 = u->size[0] * u->size[1];
  u->size[0] = 4;
  t = N - 1.0;
  if (!(t >= 0.0)) {
    emlrtNonNegativeCheckR2012b(t, &i_emlrtDCI, &st);
  }

  if (t != (int32_T)muDoubleScalarFloor(t)) {
    emlrtIntegerCheckR2012b(t, &h_emlrtDCI, &st);
  }

  u->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(&st, u, i0, &e_emlrtRTEI);
  t = N - 1.0;
  if (!(t >= 0.0)) {
    emlrtNonNegativeCheckR2012b(t, &q_emlrtDCI, &st);
  }

  if (t != (int32_T)muDoubleScalarFloor(t)) {
    emlrtIntegerCheckR2012b(t, &p_emlrtDCI, &st);
  }

  loop_ub = (int32_T)t << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u->data[i0] = 0.0;
  }

  emxInit_real_T(&st, &u_fb, 2, &f_emlrtRTEI, true);
  i0 = u_fb->size[0] * u_fb->size[1];
  u_fb->size[0] = 4;
  u_fb->size[1] = (int32_T)(N - 1.0);
  emxEnsureCapacity_real_T(&st, u_fb, i0, &f_emlrtRTEI);
  loop_ub = (int32_T)(N - 1.0) << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_fb->data[i0] = 0.0;
  }

  i0 = (int32_T)N;
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &i_emlrtBCI, &st);
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
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &j_emlrtBCI, &st);
    }

    i0 = x->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &h_emlrtBCI, &st);
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
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, loop_ub, &b_emlrtBCI, &st);
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
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i0, &g_emlrtBCI, &st);
    }

    i = ii + 1;
    i0 = u_fb->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i0, &f_emlrtBCI, &st);
    }

    b_ii = ii + 1;
    loop_ub = u->size[1];
    if (!((ii + 1 >= 1) && (ii + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, loop_ub, &e_emlrtBCI, &st);
    }

    for (i0 = 0; i0 < 4; i0++) {
      u->data[i0 + u->size[0] * ii] = (real_T)u_ff->data[i0 + u_ff->size[0] * (i
        - 1)] + u_fb->data[i0 + u_fb->size[0] * (b_ii - 1)];
    }

    b_st.site = &f_emlrtRSI;
    i0 = x->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &d_emlrtBCI, &b_st);
    }

    i0 = u->size[1];
    loop_ub = ii + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &c_emlrtBCI, &b_st);
    }

    /*  dq = dynamics(q,u); */
    getDynSys(*(real_T (*)[12])&x->data[x->size[0] * ii], *(real_T (*)[4])&
              u->data[u->size[0] * ii], dq);
    loop_ub = x->size[1];
    i0 = (int32_T)((1.0 + (real_T)ii) + 1.0);
    if (!((i0 >= 1) && (i0 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &emlrtBCI, &b_st);
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
  st.site = &c_emlrtRSI;
  slqSolve(&st, x, u, N, dt, x0, x_wp, *t_wp, xf, K);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (computeSLQTrajHoop.cpp) */
