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
#include "computeSLQTrajHoop.h"
#include "slqSolve.h"
#include "compute_qN.h"
#include "compute_A.h"
#include "compute_B.h"
#include "compute_q.h"
#include "compute_q_vec.h"
#include "compute_Q_mat.h"
#include "getDynSys.h"
#include "computeSLQTrajHoop_emxutil.h"
#include "inv.h"
#include "compute_r_vec.h"
#include "compute_qN_vec.h"
#include "norm.h"
#include "computeSLQTrajHoop_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 13,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 16,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 34,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 35,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 43,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 44,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 45,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 52,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 53, /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 56, /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 57, /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 60, /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 70, /* lineNo */
  "slqSolve",                          /* fcnName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 11, /* lineNo */
  "forwardIntTraj",                    /* fcnName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m"/* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  28,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 2, /* lineNo */
  1,                                   /* colNo */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 70,/* lineNo */
  6,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 70,/* lineNo */
  12,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  9,                                   /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  31,                                  /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  23,                                  /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  39,                                  /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  71,                                  /* colNo */
  "x_bar",                             /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  57,                                  /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  5,                                   /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  48,                                  /* colNo */
  "K",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  36,                                  /* colNo */
  "u_ff",                              /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  23,                                  /* colNo */
  "u_bar",                             /* aName */
  "forwardIntTraj",                    /* fName */
  "/home/instructor/group3/ACSI/Project/forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  65,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  53,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  40,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  17,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  96,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  78,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  67,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  54,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  41,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  19,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  100,                                 /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  83,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  72,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  60,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  45,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  15,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  28,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  48,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  48,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  44,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  52,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  22,                                  /* colNo */
  "u_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  22,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m"/* pName */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  43,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  15,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  16,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 7,   /* lineNo */
  26,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 8,   /* lineNo */
  37,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 10,  /* lineNo */
  36,                                  /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 7,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 8,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  23,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  5,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  33,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  5,                                   /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  37,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  45,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  20,                                  /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  9,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "/home/instructor/group3/ACSI/Project/slqSolve.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void slqSolve(const emlrtStack *sp, emxArray_real_T *x_bar, emxArray_real_T
              *u_bar, real_T umax, real_T N, real_T dt, const real_T x0[12],
              const emxArray_real_T *x_wp, real_T t_wp, const real_T xf[12],
              emxArray_real_T *K)
{
  int32_T unnamed_idx_1;
  emxArray_real_T *u_ff;
  int32_T i5;
  int32_T loop_ub;
  emxArray_real_T *s;
  real_T alpha1;
  emxArray_real_T *s_vec;
  int32_T b_loop_ub;
  emxArray_real_T *S_mat;
  int32_T ii;
  emxArray_real_T *b_x_bar;
  emxArray_real_T *b_u_bar;
  int32_T i6;
  real_T t;
  int32_T i7;
  static const int32_T iv11[144] = { 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 };

  int32_T k;
  real_T A[144];
  real_T B[48];
  real_T q;
  real_T q_vec[12];
  real_T Q_mat[144];
  real_T b_q_vec[12];
  int32_T i8;
  real_T g[4];
  real_T y[4];
  real_T a[48];
  int32_T B_tmp;
  real_T b[144];
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T b_a[48];
  real_T G[48];
  real_T H[16];
  real_T c_a[16];
  static const int32_T R[16] = { 100000, 0, 0, 0, 0, 100000, 0, 0, 0, 0, 100000,
    0, 0, 0, 0, 100000 };

  real_T d_a[144];
  real_T e_a[144];
  real_T b_y[144];
  real_T b_K[12];
  emlrtStack st;
  emlrtStack b_st;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Initialize with arbitrary u_ff above convergence bound */
  unnamed_idx_1 = u_bar->size[1];
  emxInit_real_T(sp, &u_ff, 2, &j_emlrtRTEI, true);
  i5 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  u_ff->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, u_ff, i5, &j_emlrtRTEI);
  loop_ub = unnamed_idx_1 << 2;
  for (i5 = 0; i5 < loop_ub; i5++) {
    u_ff->data[i5] = 1.0;
  }

  emxInit_real_T(sp, &s, 1, &k_emlrtRTEI, true);
  i5 = s->size[0];
  alpha1 = (int32_T)muDoubleScalarFloor(N);
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &t_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N;
  s->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, s, i5, &k_emlrtRTEI);
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &t_emlrtDCI, sp);
  }

  for (i5 = 0; i5 < loop_ub; i5++) {
    s->data[i5] = 0.0;
  }

  emxInit_real_T(sp, &s_vec, 2, &l_emlrtRTEI, true);
  i5 = s_vec->size[0] * s_vec->size[1];
  s_vec->size[0] = 12;
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &q_emlrtDCI, sp);
  }

  s_vec->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, s_vec, i5, &l_emlrtRTEI);
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &u_emlrtDCI, sp);
  }

  b_loop_ub = 12 * loop_ub;
  for (i5 = 0; i5 < b_loop_ub; i5++) {
    s_vec->data[i5] = 0.0;
  }

  emxInit_real_T(sp, &S_mat, 3, &m_emlrtRTEI, true);
  i5 = S_mat->size[0] * S_mat->size[1] * S_mat->size[2];
  S_mat->size[0] = 12;
  S_mat->size[1] = 12;
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &r_emlrtDCI, sp);
  }

  S_mat->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, S_mat, i5, &m_emlrtRTEI);
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &v_emlrtDCI, sp);
  }

  b_loop_ub = 144 * loop_ub;
  for (i5 = 0; i5 < b_loop_ub; i5++) {
    S_mat->data[i5] = 0.0;
  }

  i5 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &s_emlrtDCI, sp);
  }

  K->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, K, i5, &n_emlrtRTEI);
  if (N != alpha1) {
    emlrtIntegerCheckR2012b(N, &w_emlrtDCI, sp);
  }

  b_loop_ub = 48 * loop_ub;
  for (i5 = 0; i5 < b_loop_ub; i5++) {
    K->data[i5] = 0.0;
  }

  ii = 1;
  emxInit_real_T(sp, &b_x_bar, 2, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &b_u_bar, 2, &g_emlrtRTEI, true);
  do {
    exitg1 = 0;
    st.site = &r_emlrtRSI;
    if ((b_norm(&st, u_ff) >= 1.0E-6) && (ii < 2)) {
      /*  Stop if feedforward increment converges */
      /*  Initialize S matrix (coefficients of quadratic functional) */
      i5 = x_bar->size[1];
      if ((loop_ub < 1) || (loop_ub > i5)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &ic_emlrtBCI, sp);
      }

      i5 = s->size[0];
      if ((loop_ub < 1) || (loop_ub > i5)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &jc_emlrtBCI, sp);
      }

      st.site = &s_emlrtRSI;
      s->data[loop_ub - 1] = compute_qN(*(real_T (*)[12])&x_bar->data[12 *
        (loop_ub - 1)], xf);
      i5 = s_vec->size[1];
      i6 = x_bar->size[1];
      if ((loop_ub < 1) || (loop_ub > i6)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i6, &kc_emlrtBCI, sp);
      }

      if ((loop_ub < 1) || (loop_ub > i5)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &lc_emlrtBCI, sp);
      }

      compute_qN_vec(*(real_T (*)[12])&x_bar->data[12 * (loop_ub - 1)], xf,
                     *(real_T (*)[12])&s_vec->data[12 * (loop_ub - 1)]);
      i5 = x_bar->size[1];
      if ((loop_ub < 1) || (loop_ub > i5)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &fc_emlrtBCI, sp);
      }

      i5 = S_mat->size[2];
      if ((loop_ub < 1) || (loop_ub > i5)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &wb_emlrtBCI, sp);
      }

      for (i5 = 0; i5 < 12; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          i7 = i6 + 12 * i5;
          S_mat->data[i7 + 144 * ((int32_T)N - 1)] = iv11[i7];
        }
      }

      /*  Initialize time */
      t = (N - 1.0) * dt;

      /*  Backward propagation */
      i5 = (int32_T)((1.0 + (-1.0 - (N - 1.0))) / -1.0);
      emlrtForLoopVectorCheckR2012b(N - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i5,
        &x_emlrtRTEI, sp);
      for (ii = 0; ii < i5; ii++) {
        k = (loop_ub - ii) - 1;

        /*  Update time */
        t -= dt;

        /*  Select current state and control vectors */
        i6 = x_bar->size[1];
        if ((k < 1) || (k > i6)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &ec_emlrtBCI, sp);
        }

        i6 = u_bar->size[1];
        if ((k < 1) || (k > i6)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &dc_emlrtBCI, sp);
        }

        /*  Compute linearized dynamics */
        st.site = &t_emlrtRSI;
        compute_A(*(real_T (*)[12])&x_bar->data[12 * (k - 1)], *(real_T (*)[4])&
                  u_bar->data[(k - 1) << 2], A);
        st.site = &u_emlrtRSI;
        compute_B(*(real_T (*)[12])&x_bar->data[12 * (k - 1)], B);

        /*          x_wp = [0;0;0;0;0;0 */
        /*              sign(xf(1) - xn(1));0;0;0;0;0]; */
        /*           */
        /*          x_wp(1:3) = x0+dx0*t+0.2*[0;0;-9.81]*t^2; */
        /*  Compute cost weighting terms */
        i6 = x_wp->size[1];
        if ((k < 1) || (k > i6)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &mc_emlrtBCI, sp);
        }

        st.site = &v_emlrtRSI;
        q = compute_q(t, *(real_T (*)[12])&x_bar->data[12 * (k - 1)], *(real_T (*)
          [4])&u_bar->data[(k - 1) << 2], xf, *(real_T (*)[4])&u_bar->data[(k -
          1) << 2], *(real_T (*)[12])&x_wp->data[12 * (k - 1)], t_wp);
        i6 = x_wp->size[1];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &nc_emlrtBCI, sp);
        }

        st.site = &w_emlrtRSI;
        compute_q_vec(t, *(real_T (*)[12])&x_bar->data[12 * (k - 1)], xf,
                      *(real_T (*)[12])&x_wp->data[12 * (k - 1)], t_wp, q_vec);
        i6 = x_wp->size[1];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &cc_emlrtBCI, sp);
        }

        st.site = &x_emlrtRSI;
        compute_Q_mat(t, t_wp, Q_mat);
        i6 = x_wp->size[1];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &bc_emlrtBCI, sp);
        }

        i6 = x_wp->size[1];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &ac_emlrtBCI, sp);
        }

        i6 = x_wp->size[1];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &yb_emlrtBCI, sp);
        }

        /*  Compute grouping terms */
        i6 = s_vec->size[1];
        i7 = k + 1;
        if ((i7 < 1) || (i7 > i6)) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &xb_emlrtBCI, sp);
        }

        i6 = (k - 1) << 2;
        compute_r_vec(*(real_T (*)[4])&u_bar->data[i6], *(real_T (*)[4])&
                      u_bar->data[(k - 1) << 2], g);
        y[0] = g[0];
        y[1] = g[1];
        y[2] = g[2];
        y[3] = g[3];
        for (i7 = 0; i7 < 4; i7++) {
          alpha1 = 0.0;
          for (i8 = 0; i8 < 12; i8++) {
            alpha1 += B[i8 + 12 * i7] * s_vec->data[i8 + 12 * k];
          }

          g[i7] = y[i7] + alpha1;
        }

        st.site = &y_emlrtRSI;
        for (i7 = 0; i7 < 12; i7++) {
          unnamed_idx_1 = i7 << 2;
          a[unnamed_idx_1] = B[i7];
          a[1 + unnamed_idx_1] = B[i7 + 12];
          a[2 + unnamed_idx_1] = B[i7 + 24];
          a[3 + unnamed_idx_1] = B[i7 + 36];
        }

        i7 = S_mat->size[2];
        unnamed_idx_1 = k + 1;
        if ((unnamed_idx_1 < 1) || (unnamed_idx_1 > i7)) {
          emlrtDynamicBoundsCheckR2012b(unnamed_idx_1, 1, i7, &vb_emlrtBCI, &st);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            b_loop_ub = i8 + 12 * i7;
            b[b_loop_ub] = S_mat->data[b_loop_ub + 144 * (unnamed_idx_1 - 1)];
          }
        }

        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        st.site = &y_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &G[0], &ldc_t);
        st.site = &ab_emlrtRSI;
        for (i7 = 0; i7 < 12; i7++) {
          unnamed_idx_1 = i7 << 2;
          a[unnamed_idx_1] = B[i7];
          a[1 + unnamed_idx_1] = B[i7 + 12];
          a[2 + unnamed_idx_1] = B[i7 + 24];
          a[3 + unnamed_idx_1] = B[i7 + 36];
        }

        i7 = S_mat->size[2];
        unnamed_idx_1 = k + 1;
        if ((unnamed_idx_1 < 1) || (unnamed_idx_1 > i7)) {
          emlrtDynamicBoundsCheckR2012b(unnamed_idx_1, 1, i7, &ub_emlrtBCI, &st);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            b_loop_ub = i8 + 12 * i7;
            b[b_loop_ub] = S_mat->data[b_loop_ub + 144 * (unnamed_idx_1 - 1)];
          }
        }

        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        for (i7 = 0; i7 < 4; i7++) {
          for (i8 = 0; i8 < 4; i8++) {
            alpha1 = 0.0;
            for (unnamed_idx_1 = 0; unnamed_idx_1 < 12; unnamed_idx_1++) {
              alpha1 += b_a[i7 + (unnamed_idx_1 << 2)] * B[unnamed_idx_1 + 12 *
                i8];
            }

            unnamed_idx_1 = i7 + (i8 << 2);
            H[unnamed_idx_1] = (real_T)R[unnamed_idx_1] + alpha1;
          }
        }

        /*  Update feedback matrix and feedforward control */
        st.site = &bb_emlrtRSI;
        inv(&st, H, c_a);
        for (i7 = 0; i7 < 16; i7++) {
          c_a[i7] = -c_a[i7];
        }

        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &gc_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 4; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            unnamed_idx_1 = i8 << 2;
            b_loop_ub = (i7 + unnamed_idx_1) + 48 * (k - 1);
            K->data[b_loop_ub] = 0.0;
            K->data[b_loop_ub] += c_a[i7] * G[unnamed_idx_1];
            K->data[b_loop_ub] += c_a[i7 + 4] * G[1 + unnamed_idx_1];
            K->data[b_loop_ub] += c_a[i7 + 8] * G[2 + unnamed_idx_1];
            K->data[b_loop_ub] += c_a[i7 + 12] * G[3 + unnamed_idx_1];
          }
        }

        st.site = &cb_emlrtRSI;
        inv(&st, H, c_a);
        for (i7 = 0; i7 < 16; i7++) {
          c_a[i7] = -c_a[i7];
        }

        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &hc_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 4; i7++) {
          i8 = i7 + i6;
          u_ff->data[i8] = 0.0;
          u_ff->data[i8] += c_a[i7] * g[0];
          u_ff->data[i8] += c_a[i7 + 4] * g[1];
          u_ff->data[i8] += c_a[i7 + 8] * g[2];
          u_ff->data[i8] += c_a[i7 + 12] * g[3];
        }

        /*  Update current coefficients of functional */
        st.site = &db_emlrtRSI;
        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            d_a[i8 + 12 * i7] = A[i7 + 12 * i8];
          }
        }

        i7 = S_mat->size[2];
        unnamed_idx_1 = k + 1;
        if ((unnamed_idx_1 < 1) || (unnamed_idx_1 > i7)) {
          emlrtDynamicBoundsCheckR2012b(unnamed_idx_1, 1, i7, &tb_emlrtBCI, &st);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            b_loop_ub = i8 + 12 * i7;
            b[b_loop_ub] = S_mat->data[b_loop_ub + 144 * (unnamed_idx_1 - 1)];
          }
        }

        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &d_a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &sb_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 4; i8++) {
            B_tmp = i7 + 12 * i8;
            B[B_tmp] = 0.0;
            unnamed_idx_1 = (i7 << 2) + 48 * (k - 1);
            b_loop_ub = i8 << 2;
            alpha1 = K->data[unnamed_idx_1] * H[b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 1] * H[1 + b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 2] * H[2 + b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 3] * H[3 + b_loop_ub];
            B[B_tmp] = alpha1;
          }
        }

        memcpy(&a[0], &B[0], 48U * sizeof(real_T));
        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &rb_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 12; i7++) {
          unnamed_idx_1 = i7 << 2;
          b_loop_ub = unnamed_idx_1 + 48 * (k - 1);
          b_a[unnamed_idx_1] = K->data[b_loop_ub];
          b_a[1 + unnamed_idx_1] = K->data[b_loop_ub + 1];
          b_a[2 + unnamed_idx_1] = K->data[b_loop_ub + 2];
          b_a[3 + unnamed_idx_1] = K->data[b_loop_ub + 3];
        }

        st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)12;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &e_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &b_y[0], &ldc_t);
        st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &b[0], &ldc_t);
        st.site = &db_emlrtRSI;
        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &qb_emlrtBCI, &st);
        }

        for (i7 = 0; i7 < 4; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            B[i8 + 12 * i7] = K->data[(i7 + (i8 << 2)) + 48 * (k - 1)];
          }
        }

        memcpy(&a[0], &B[0], 48U * sizeof(real_T));
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &G[0],
              &ldb_t, &beta1, &d_a[0], &ldc_t);
        st.site = &db_emlrtRSI;
        for (i7 = 0; i7 < 4; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            B[i8 + 12 * i7] = G[i7 + (i8 << 2)];
          }
        }

        memcpy(&a[0], &B[0], 48U * sizeof(real_T));
        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &pb_emlrtBCI, &st);
        }

        for (i7 = 0; i7 < 12; i7++) {
          unnamed_idx_1 = i7 << 2;
          b_loop_ub = unnamed_idx_1 + 48 * (k - 1);
          b_a[unnamed_idx_1] = K->data[b_loop_ub];
          b_a[1 + unnamed_idx_1] = K->data[b_loop_ub + 1];
          b_a[2 + unnamed_idx_1] = K->data[b_loop_ub + 2];
          b_a[3 + unnamed_idx_1] = K->data[b_loop_ub + 3];
        }

        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        i7 = S_mat->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &ob_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 12; i8++) {
            unnamed_idx_1 = i8 + 12 * i7;
            S_mat->data[unnamed_idx_1 + 144 * (k - 1)] = (((Q_mat[unnamed_idx_1]
              + b_y[unnamed_idx_1]) + b[unnamed_idx_1]) + d_a[unnamed_idx_1]) +
              e_a[unnamed_idx_1];
          }
        }

        i7 = s_vec->size[1];
        i8 = k + 1;
        if ((i8 < 1) || (i8 > i7)) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &nb_emlrtBCI, sp);
        }

        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &mb_emlrtBCI, sp);
        }

        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &lb_emlrtBCI, sp);
        }

        i7 = K->size[2];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &kb_emlrtBCI, sp);
        }

        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &jb_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 12; i7++) {
          for (i8 = 0; i8 < 4; i8++) {
            B_tmp = i7 + 12 * i8;
            B[B_tmp] = 0.0;
            unnamed_idx_1 = (i7 << 2) + 48 * (k - 1);
            b_loop_ub = i8 << 2;
            alpha1 = K->data[unnamed_idx_1] * H[b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 1] * H[1 + b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 2] * H[2 + b_loop_ub];
            alpha1 += K->data[unnamed_idx_1 + 3] * H[3 + b_loop_ub];
            B[B_tmp] = alpha1;
          }
        }

        for (i7 = 0; i7 < 12; i7++) {
          alpha1 = 0.0;
          for (i8 = 0; i8 < 12; i8++) {
            alpha1 += A[i8 + 12 * i7] * s_vec->data[i8 + 12 * k];
          }

          b_q_vec[i7] = q_vec[i7] + alpha1;
        }

        for (i7 = 0; i7 < 12; i7++) {
          b_K[i7] = 0.0;
          alpha1 = B[i7] * u_ff->data[i6];
          alpha1 += B[i7 + 12] * u_ff->data[1 + i6];
          alpha1 += B[i7 + 24] * u_ff->data[2 + i6];
          alpha1 += B[i7 + 36] * u_ff->data[3 + i6];
          b_K[i7] = alpha1;
        }

        for (i7 = 0; i7 < 12; i7++) {
          i8 = (i7 << 2) + 48 * (k - 1);
          alpha1 = K->data[i8] * g[0];
          alpha1 += K->data[i8 + 1] * g[1];
          alpha1 += K->data[i8 + 2] * g[2];
          alpha1 += K->data[i8 + 3] * g[3];
          q_vec[i7] = (b_q_vec[i7] + b_K[i7]) + alpha1;
        }

        for (i7 = 0; i7 < 12; i7++) {
          b_q_vec[i7] = 0.0;
          i8 = i7 << 2;
          alpha1 = G[i8] * u_ff->data[i6];
          alpha1 += G[1 + i8] * u_ff->data[1 + ((k - 1) << 2)];
          alpha1 += G[2 + i8] * u_ff->data[2 + ((k - 1) << 2)];
          alpha1 += G[3 + i8] * u_ff->data[3 + ((k - 1) << 2)];
          b_q_vec[i7] = alpha1;
        }

        i7 = s_vec->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &ib_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 12; i7++) {
          s_vec->data[i7 + 12 * (k - 1)] = q_vec[i7] + b_q_vec[i7];
        }

        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &hb_emlrtBCI, sp);
        }

        for (i7 = 0; i7 < 4; i7++) {
          y[i7] = 0.0;
          i8 = i7 << 2;
          alpha1 = 0.5 * u_ff->data[i6] * H[i8];
          alpha1 += 0.5 * u_ff->data[1 + ((k - 1) << 2)] * H[1 + i8];
          alpha1 += 0.5 * u_ff->data[2 + ((k - 1) << 2)] * H[2 + i8];
          alpha1 += 0.5 * u_ff->data[3 + ((k - 1) << 2)] * H[3 + i8];
          y[i7] = alpha1;
        }

        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &gb_emlrtBCI, sp);
        }

        alpha1 = y[0] * u_ff->data[i6];
        alpha1 += y[1] * u_ff->data[1 + ((k - 1) << 2)];
        alpha1 += y[2] * u_ff->data[2 + ((k - 1) << 2)];
        alpha1 += y[3] * u_ff->data[3 + ((k - 1) << 2)];
        i7 = u_ff->size[1];
        if (k > i7) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i7, &fb_emlrtBCI, sp);
        }

        beta1 = u_ff->data[i6] * g[0];
        beta1 += u_ff->data[1 + ((k - 1) << 2)] * g[1];
        beta1 += u_ff->data[2 + ((k - 1) << 2)] * g[2];
        beta1 += u_ff->data[3 + ((k - 1) << 2)] * g[3];
        i6 = s->size[0];
        i7 = k + 1;
        if ((i7 < 1) || (i7 > i6)) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &oc_emlrtBCI, sp);
        }

        i6 = s->size[0];
        if (k > i6) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &pc_emlrtBCI, sp);
        }

        s->data[k - 1] = ((q + s->data[i7 - 1]) + alpha1) + beta1;

        /*          S_mat(:,:,k) */
        /*          s_vec(:,k) */
        /*          s(k) */
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &eb_emlrtRSI;
      unnamed_idx_1 = x_bar->size[1];
      i5 = b_x_bar->size[0] * b_x_bar->size[1];
      b_x_bar->size[0] = 12;
      b_x_bar->size[1] = unnamed_idx_1;
      emxEnsureCapacity_real_T(&st, b_x_bar, i5, &o_emlrtRTEI);
      b_loop_ub = 12 * unnamed_idx_1;
      for (i5 = 0; i5 < b_loop_ub; i5++) {
        b_x_bar->data[i5] = 0.0;
      }

      b_loop_ub = u_bar->size[1];
      i5 = b_u_bar->size[0] * b_u_bar->size[1];
      b_u_bar->size[0] = 4;
      b_u_bar->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, b_u_bar, i5, &p_emlrtRTEI);
      b_loop_ub <<= 2;
      for (i5 = 0; i5 < b_loop_ub; i5++) {
        b_u_bar->data[i5] = 0.0;
      }

      if (1 > unnamed_idx_1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, unnamed_idx_1, &bb_emlrtBCI, &st);
      }

      for (i5 = 0; i5 < 12; i5++) {
        b_x_bar->data[i5] = x0[i5];
      }

      for (ii = 0; ii <= loop_ub - 2; ii++) {
        i5 = K->size[2];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &cb_emlrtBCI, &st);
        }

        i5 = b_x_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &ab_emlrtBCI, &st);
        }

        i5 = x_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &y_emlrtBCI, &st);
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_loop_ub = i5 + 12 * ii;
          b_q_vec[i5] = b_x_bar->data[b_loop_ub] - x_bar->data[b_loop_ub];
        }

        i5 = b_u_bar->size[1];
        i6 = u_bar->size[1];
        i7 = 1 + ii;
        if ((i7 < 1) || (i7 > i6)) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &eb_emlrtBCI, &st);
        }

        i6 = u_ff->size[1];
        i8 = 1 + ii;
        if ((i8 < 1) || (i8 > i6)) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &db_emlrtBCI, &st);
        }

        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &x_emlrtBCI, &st);
        }

        for (i5 = 0; i5 < 4; i5++) {
          alpha1 = 0.0;
          for (i6 = 0; i6 < 12; i6++) {
            alpha1 += K->data[(i5 + (i6 << 2)) + 48 * ii] * b_q_vec[i6];
          }

          b_u_bar->data[i5 + (ii << 2)] = (u_bar->data[i5 + ((i7 - 1) << 2)] +
            u_ff->data[i5 + ((i8 - 1) << 2)]) + alpha1;
        }

        i5 = b_u_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &w_emlrtBCI, &st);
        }

        y[0] = muDoubleScalarMax(-umax, b_u_bar->data[ii << 2]);
        unnamed_idx_1 = 1 + (ii << 2);
        y[1] = muDoubleScalarMax(-umax, b_u_bar->data[unnamed_idx_1]);
        b_loop_ub = 2 + (ii << 2);
        y[2] = muDoubleScalarMax(-umax, b_u_bar->data[b_loop_ub]);
        B_tmp = 3 + (ii << 2);
        y[3] = muDoubleScalarMax(-umax, b_u_bar->data[B_tmp]);
        i5 = b_u_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &v_emlrtBCI, &st);
        }

        b_u_bar->data[ii << 2] = muDoubleScalarMin(umax, y[0]);
        b_u_bar->data[unnamed_idx_1] = muDoubleScalarMin(umax, y[1]);
        b_u_bar->data[b_loop_ub] = muDoubleScalarMin(umax, y[2]);
        b_u_bar->data[B_tmp] = muDoubleScalarMin(umax, y[3]);
        b_st.site = &rd_emlrtRSI;
        i5 = b_x_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &u_emlrtBCI, &b_st);
        }

        i5 = b_u_bar->size[1];
        i6 = 1 + ii;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &t_emlrtBCI, &b_st);
        }

        /*  dq = dynamics(q,u); */
        getDynSys(*(real_T (*)[12])&b_x_bar->data[12 * ii], *(real_T (*)[4])&
                  b_u_bar->data[ii << 2], q_vec);
        i5 = b_x_bar->size[1];
        for (i6 = 0; i6 < 12; i6++) {
          alpha1 = b_x_bar->data[i6 + 12 * ii] + q_vec[i6] * dt;
          q_vec[i6] = alpha1;
        }

        i6 = ii + 2;
        if ((i6 < 1) || (i6 > i5)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &s_emlrtBCI, &b_st);
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_x_bar->data[i5 + 12 * (ii + 1)] = q_vec[i5];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      i5 = x_bar->size[0] * x_bar->size[1];
      x_bar->size[0] = 12;
      x_bar->size[1] = b_x_bar->size[1];
      emxEnsureCapacity_real_T(sp, x_bar, i5, &q_emlrtRTEI);
      b_loop_ub = b_x_bar->size[1];
      for (i5 = 0; i5 < b_loop_ub; i5++) {
        for (i6 = 0; i6 < 12; i6++) {
          i7 = i6 + 12 * i5;
          x_bar->data[i7] = b_x_bar->data[i7];
        }
      }

      i5 = u_bar->size[0] * u_bar->size[1];
      u_bar->size[0] = 4;
      u_bar->size[1] = b_u_bar->size[1];
      emxEnsureCapacity_real_T(sp, u_bar, i5, &r_emlrtRTEI);
      b_loop_ub = b_u_bar->size[1];
      for (i5 = 0; i5 < b_loop_ub; i5++) {
        i6 = i5 << 2;
        u_bar->data[i6] = b_u_bar->data[i6];
        i7 = 1 + i6;
        u_bar->data[i7] = b_u_bar->data[i7];
        i7 = 2 + i6;
        u_bar->data[i7] = b_u_bar->data[i7];
        i6 += 3;
        u_bar->data[i6] = b_u_bar->data[i6];
      }

      /*      J = terminalCost(x_bar(:,end), xf); */
      /*      t = 0; */
      /*      for k = 1:N-1 */
      /*          J = J + intermediateCost(t,x_bar(:,k),u_bar(:,k),x_bar(:,k),u_bar(:,k), x_wp(:,k),t_wp); */
      /*          t = t+dt; */
      /*      end */
      /*      J */
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

  emxFree_real_T(&b_u_bar);
  emxFree_real_T(&b_x_bar);
  emxFree_real_T(&S_mat);
  emxFree_real_T(&s_vec);
  emxFree_real_T(&s);
  emxFree_real_T(&u_ff);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (slqSolve.cpp) */
