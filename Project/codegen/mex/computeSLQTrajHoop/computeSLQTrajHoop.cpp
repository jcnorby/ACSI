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
static emlrtRSInfo emlrtRSI = { 15,    /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 55,  /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 60,  /* lineNo */
  "computeSLQTrajHoop",                /* fcnName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 14,  /* lineNo */
  "forwardInt",                        /* fcnName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 2, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  9,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  12,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  31,                                  /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  23,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  39,                                  /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  35,                                  /* colNo */
  "u_fb",                              /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  22,                                  /* colNo */
  "u_ff",                              /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  34,                                  /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  5,                                   /* colNo */
  "x",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  25,                                  /* colNo */
  "K",                                 /* aName */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 10,/* lineNo */
  10,                                  /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  11,                                  /* colNo */
  "K",                                 /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  12,                                  /* colNo */
  "u_ff",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = { 49,/* lineNo */
  10,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 26,    /* lineNo */
  15,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  14,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  14,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  8,                                   /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = { 8, /* lineNo */
  9,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 2,   /* lineNo */
  26,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 2,   /* lineNo */
  26,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 28,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 2,   /* lineNo */
  14,                                  /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 3,   /* lineNo */
  13,                                  /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 28,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  31,                                  /* colNo */
  "x_wp",                              /* aName */
  "computeSLQTrajHoop",                /* fName */
  "/home/instructor/group3/ACSI/Project/computeSLQTrajHoop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 2,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "forwardInt",                        /* fName */
  "/home/instructor/group3/ACSI/Project/forwardInt.m",/* pName */
  4                                    /* checkKind */
};

/* Function Definitions */
void computeSLQTrajHoop(const emlrtStack *sp, real_T t_current, real_T N, real_T
  dt, const real_T x0[12], const real_T xf[12], real_T umax, real_T height_wp,
  const real_T x0_wp[3], const real_T dx0_wp[3], const real_T ddx0_wp[3],
  boolean_T flag_wp, emxArray_real_T *x, emxArray_real_T *K, emxArray_real_T *u,
  real_T *i_wp, real_T *t_wp, emxArray_real_T *x_wp)
{
  int32_T i0;
  int32_T loop_ub;
  real_T t;
  emxArray_int8_T *u_ff;
  real_T b;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  boolean_T dynamic_hoop_condition;
  boolean_T static_hoop_condition;
  int32_T ii;
  static const real_T K_lqr[48] = { -0.0, 0.0, 0.7856, 0.0, 0.0, -0.7856, 0.0,
    0.0, 1.3341, 0.0, 0.0, 0.0, 0.0, 4.7218, 0.0, -0.0, 0.0, 0.0, 4.7218, 0.0,
    0.0, -0.0, 0.0, 1.4473, 0.0, 0.0, 1.1798, 0.0, 0.0, -1.1798, 0.0, 0.0,
    1.3743, 0.0, 0.0, 0.0, 0.0, 0.9194, 0.0, -0.0, 0.0, 0.0, 0.9194, 0.0, 0.0,
    -0.0, 0.0, 1.4909 };

  emxArray_real_T *u_fb;
  int32_T K_tmp;
  real_T dq[12];
  real_T b_K[48];
  int32_T i4;
  real_T z1_idx_2;
  real_T z1_idx_3;
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
  *i_wp = -1.0;
  i0 = (int32_T)N;
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &q_emlrtBCI, sp);
  }

  x_wp->data[0] = x0_wp[0];
  x_wp->data[1] = x0_wp[1];
  x_wp->data[2] = x0_wp[2];
  x_wp->data[3] = 0.0;
  x_wp->data[4] = 0.0;
  x_wp->data[5] = 0.0;
  x_wp->data[6] = 0.0;
  x_wp->data[7] = 2.0 * muDoubleScalarSign(xf[0] - x0[0]);
  x_wp->data[8] = 0.0;
  x_wp->data[9] = 0.0;
  x_wp->data[10] = 0.0;
  x_wp->data[11] = 0.0;
  i0 = (int32_T)(N + -1.0);
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)(N + -1.0),
    &u_emlrtRTEI, sp);
  for (loop_ub = 0; loop_ub < i0; loop_ub++) {
    /*          x_wp(:,i) = [0.25;0.5;sin(2*pi*t/T);0;0;0; */
    /*              1;1;0;0;0;0]; */
    /*          x_wp(:,i) = [0.25;cos(2*pi*t/T);sin(2*pi*t/T);0;0;0; */
    /*              1;1;0;0;0;0]; */
    t += dt;
    st.site = &emlrtRSI;
    b = t * t;
    i1 = x_wp->size[1];
    i2 = (int32_T)(2U + loop_ub);
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &p_emlrtBCI, sp);
    }

    i1 = 12 * (loop_ub + 1);
    x_wp->data[i1] = (x0_wp[0] + dx0_wp[0] * t) + 0.5 * ddx0_wp[0] * b;
    x_wp->data[1 + i1] = (x0_wp[1] + dx0_wp[1] * t) + 0.5 * ddx0_wp[1] * b;
    x_wp->data[2 + i1] = (x0_wp[2] + dx0_wp[2] * t) + 0.5 * ddx0_wp[2] * b;
    i3 = x_wp->size[1];
    if ((i2 < 1) || (i2 > i3)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &o_emlrtBCI, sp);
    }

    x_wp->data[6 + i1] = 0.0;
    x_wp->data[7 + i1] = 2.0 * muDoubleScalarSign(xf[1] - x0[1]);
    x_wp->data[8 + i1] = 0.0;
    i1 = x_wp->size[1];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, sp);
    }

    if ((x_wp->data[2 + 12 * (i2 - 1)] >= height_wp) && (ddx0_wp[2] < 0.0)) {
      dynamic_hoop_condition = true;
    } else {
      dynamic_hoop_condition = false;
    }

    if ((t <= N / 2.0 * dt - t_current) && (ddx0_wp[2] == 0.0)) {
      static_hoop_condition = true;
    } else {
      static_hoop_condition = false;
    }

    if ((dynamic_hoop_condition || static_hoop_condition) && flag_wp) {
      *t_wp = t;
      *i_wp = 2.0 + (real_T)loop_ub;
    }

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
    emlrtIntegerCheckR2012b(N, &k_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_ff->data[i0] = 0;
  }

  i0 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  if (!(N - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N - 1.0, &f_emlrtDCI, sp);
  }

  if (N - 1.0 != (int32_T)muDoubleScalarFloor(N - 1.0)) {
    emlrtIntegerCheckR2012b(N - 1.0, &e_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)(N - 1.0);
  emxEnsureCapacity_real_T(sp, K, i0, &c_emlrtRTEI);
  if (!(N - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N - 1.0, &m_emlrtDCI, sp);
  }

  if (N - 1.0 != (int32_T)muDoubleScalarFloor(N - 1.0)) {
    emlrtIntegerCheckR2012b(N - 1.0, &l_emlrtDCI, sp);
  }

  loop_ub = 48 * (int32_T)(N - 1.0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    K->data[i0] = 0.0;
  }

  /*  % Initialize controller with LQR solution */
  /*  g = 9.81;       % m/s^2 */
  /*  m = 0.027;      % kg */
  /*  u0 = [m*g;0;0;0]; */
  /*   */
  /*  Q = 1e3*eye(length(x0)); */
  /*  R = 1*eye(4); */
  /*  A = compute_A(x0,u0); */
  /*  B = compute_B(x0,u0); */
  /*  [K_lqr,S] = dlqr(A,B,Q,R); */
  /*  From loadK: */
  i0 = (int32_T)(N - 1.0);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N - 1.0, mxDOUBLE_CLASS, (int32_T)(N -
    1.0), &t_emlrtRTEI, sp);
  for (ii = 0; ii < i0; ii++) {
    i1 = u_ff->size[1];
    i2 = (int32_T)(1U + ii);
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &n_emlrtBCI, sp);
    }

    i1 = ii << 2;
    u_ff->data[i1] = 0;
    u_ff->data[1 + i1] = 0;
    u_ff->data[2 + i1] = 0;
    u_ff->data[3 + i1] = 0;
    i1 = K->size[2];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < 12; i1++) {
      i2 = i1 << 2;
      i3 = i2 + 48 * ii;
      K->data[i3] = K_lqr[i2];
      K->data[i3 + 1] = K_lqr[1 + i2];
      K->data[i3 + 2] = K_lqr[2 + i2];
      K->data[i3 + 3] = K_lqr[3 + i2];
    }

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
    emlrtIntegerCheckR2012b(N, &n_emlrtDCI, &st);
  }

  loop_ub = 12 * (int32_T)N;
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = 0.0;
  }

  i0 = u->size[0] * u->size[1];
  u->size[0] = 4;
  if (!(N - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N - 1.0, &i_emlrtDCI, &st);
  }

  if (N - 1.0 != (int32_T)muDoubleScalarFloor(N - 1.0)) {
    emlrtIntegerCheckR2012b(N - 1.0, &h_emlrtDCI, &st);
  }

  u->size[1] = (int32_T)(N - 1.0);
  emxEnsureCapacity_real_T(&st, u, i0, &e_emlrtRTEI);
  if (!(N - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N - 1.0, &p_emlrtDCI, &st);
  }

  if (N - 1.0 != (int32_T)muDoubleScalarFloor(N - 1.0)) {
    emlrtIntegerCheckR2012b(N - 1.0, &o_emlrtDCI, &st);
  }

  loop_ub = (int32_T)(N - 1.0) << 2;
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
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &k_emlrtBCI, &st);
  }

  for (i0 = 0; i0 < 12; i0++) {
    x->data[i0] = x0[i0];
  }

  i0 = (int32_T)(N - 1.0);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N - 1.0, mxDOUBLE_CLASS, (int32_T)(N -
    1.0), &s_emlrtRTEI, &st);
  for (ii = 0; ii < i0; ii++) {
    i1 = K->size[2];
    i2 = 1 + ii;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &l_emlrtBCI, &st);
    }

    i1 = x->size[1];
    i2 = 1 + ii;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, &st);
    }

    for (i1 = 0; i1 < 12; i1++) {
      loop_ub = i1 << 2;
      K_tmp = loop_ub + 48 * ii;
      b_K[loop_ub] = -K->data[K_tmp];
      b_K[1 + loop_ub] = -K->data[K_tmp + 1];
      b_K[2 + loop_ub] = -K->data[K_tmp + 2];
      b_K[3 + loop_ub] = -K->data[K_tmp + 3];
    }

    for (i1 = 0; i1 < 12; i1++) {
      dq[i1] = x->data[i1 + 12 * ii] - xf[i1];
    }

    i1 = u_fb->size[1];
    i2 = (int32_T)(1U + ii);
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, &st);
    }

    for (i1 = 0; i1 < 4; i1++) {
      i3 = i1 + (ii << 2);
      u_fb->data[i3] = 0.0;
      for (K_tmp = 0; K_tmp < 12; K_tmp++) {
        u_fb->data[i3] += b_K[i1 + (K_tmp << 2)] * dq[K_tmp];
      }
    }

    i1 = u->size[1];
    i3 = u_ff->size[1];
    if ((i2 < 1) || (i2 > i3)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &i_emlrtBCI, &st);
    }

    i3 = u_fb->size[1];
    if ((i2 < 1) || (i2 > i3)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &h_emlrtBCI, &st);
    }

    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &g_emlrtBCI, &st);
    }

    i1 = (i2 - 1) << 2;
    u->data[ii << 2] = (real_T)u_ff->data[i1] + u_fb->data[(i2 - 1) << 2];
    i3 = 1 + (ii << 2);
    u->data[i3] = (real_T)u_ff->data[1 + i1] + u_fb->data[1 + ((i2 - 1) << 2)];
    K_tmp = 2 + (ii << 2);
    u->data[K_tmp] = (real_T)u_ff->data[2 + i1] + u_fb->data[2 + ((i2 - 1) << 2)];
    i4 = 3 + (ii << 2);
    u->data[i4] = (real_T)u_ff->data[3 + i1] + u_fb->data[3 + ((i2 - 1) << 2)];
    i1 = u->size[1];
    loop_ub = 1 + ii;
    if ((loop_ub < 1) || (loop_ub > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &f_emlrtBCI, &st);
    }

    loop_ub = ii << 2;
    t = muDoubleScalarMax(-umax, u->data[loop_ub]);
    b = muDoubleScalarMax(-umax, u->data[1 + loop_ub]);
    z1_idx_2 = muDoubleScalarMax(-umax, u->data[2 + loop_ub]);
    z1_idx_3 = muDoubleScalarMax(-umax, u->data[3 + loop_ub]);
    i1 = u->size[1];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, &st);
    }

    u->data[ii << 2] = muDoubleScalarMin(umax, t);
    u->data[i3] = muDoubleScalarMin(umax, b);
    u->data[K_tmp] = muDoubleScalarMin(umax, z1_idx_2);
    u->data[i4] = muDoubleScalarMin(umax, z1_idx_3);
    b_st.site = &f_emlrtRSI;
    i1 = x->size[1];
    i2 = 1 + ii;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, &b_st);
    }

    i1 = u->size[1];
    i2 = 1 + ii;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, &b_st);
    }

    /*  dq = dynamics(q,u); */
    getDynSys(*(real_T (*)[12])&x->data[12 * ii], *(real_T (*)[4])&u->data[ii <<
              2], dq);
    i1 = x->size[1];
    for (i2 = 0; i2 < 12; i2++) {
      t = x->data[i2 + 12 * ii] + dq[i2] * dt;
      dq[i2] = t;
    }

    i2 = (int32_T)(ii + 2U);
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, &b_st);
    }

    for (i1 = 0; i1 < 12; i1++) {
      x->data[i1 + 12 * (ii + 1)] = dq[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(&u_fb);
  emxFree_int8_T(&u_ff);

  /*  x = x_bar; */
  /*  u = u_bar; */
  /*  Execute SLQ solve to generate optimal trajectory and control */
  st.site = &c_emlrtRSI;
  slqSolve(&st, x, u, umax, N, dt, x0, x_wp, *t_wp, xf, K);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (computeSLQTrajHoop.cpp) */
