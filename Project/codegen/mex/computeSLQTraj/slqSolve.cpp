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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "slqSolve.h"
#include "compute_qN.h"
#include "compute_A.h"
#include "compute_B.h"
#include "compute_q.h"
#include "compute_q_vec.h"
#include "compute_Q_mat.h"
#include "getDynSys.h"
#include "computeSLQTraj_emxutil.h"
#include "inv.h"
#include "compute_r_vec.h"
#include "compute_qN_vec.h"
#include "norm.h"
#include "computeSLQTraj_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 13,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 16,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 34,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 35,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 38,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 39,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 40,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 47,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 48,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 51,  /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 52, /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 55, /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 65, /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 9,  /* lineNo */
  "forwardIntTraj",                    /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m"/* pathName */
};

static emlrtRTEInfo f_emlrtRTEI = { 1, /* lineNo */
  28,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 2, /* lineNo */
  1,                                   /* colNo */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 65,/* lineNo */
  6,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 65,/* lineNo */
  12,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  9,                                   /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  31,                                  /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  9,                                   /* colNo */
  "u",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  23,                                  /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  71,                                  /* colNo */
  "x_bar",                             /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  57,                                  /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  5,                                   /* colNo */
  "x",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  48,                                  /* colNo */
  "K",                                 /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  36,                                  /* colNo */
  "u_ff",                              /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  23,                                  /* colNo */
  "u_bar",                             /* aName */
  "forwardIntTraj",                    /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  65,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  53,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  40,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  17,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  96,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  78,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  67,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  54,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  41,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  19,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  100,                                 /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  83,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  72,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  60,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  15,                                  /* colNo */
  "K",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  45,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  16,                                  /* colNo */
  "u_ff",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  30,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  15,                                  /* colNo */
  "S_mat",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  28,                                  /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  22,                                  /* colNo */
  "u_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  22,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo v_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  43,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 7,   /* lineNo */
  26,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 8,   /* lineNo */
  37,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 10,  /* lineNo */
  36,                                  /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 7,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 8,   /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  23,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  5,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  33,                                  /* colNo */
  "x_bar",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  5,                                   /* colNo */
  "s_vec",                             /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  301,                                 /* iLast */
  38,                                  /* lineNo */
  37,                                  /* colNo */
  "x_wp",                              /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  20,                                  /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  9,                                   /* colNo */
  "s",                                 /* aName */
  "slqSolve",                          /* fName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void slqSolve(const emlrtStack *sp, emxArray_real_T *x_bar, emxArray_real_T
              *u_bar, real_T N, real_T dt, const real_T x0[12], const real_T
              x_wp[3612], real_T t_wp, const real_T xf[12], emxArray_real_T *K)
{
  int32_T i4;
  emxArray_real_T *u_ff;
  int32_T iv11[2];
  int32_T loop_ub;
  emxArray_real_T *s;
  emxArray_real_T *s_vec;
  emxArray_real_T *S_mat;
  int32_T ii;
  emxArray_real_T *b_x_bar;
  emxArray_real_T *b_u_bar;
  int32_T i5;
  int32_T i6;
  real_T t;
  static const int32_T iv12[144] = { 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 };

  int32_T k;
  real_T A[144];
  int32_T iv13[2];
  real_T B[48];
  real_T q;
  real_T dq[12];
  real_T Q_mat[144];
  real_T g[4];
  real_T y[4];
  real_T alpha1;
  real_T a[48];
  real_T b[144];
  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t m_t;
  real_T c_x_bar[12];
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T b_a[48];
  real_T G[48];
  real_T H[16];
  real_T c_a[16];
  static const int16_T R[16] = { 2000, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 2000, 0, 0,
    0, 0, 2000 };

  real_T d_a[144];
  real_T e_a[144];
  real_T b_y[144];
  real_T b_K[12];
  real_T b_G[12];
  emlrtStack st;
  emlrtStack b_st;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Initialize with arbitrary u_ff above convergence bound */
  for (i4 = 0; i4 < 2; i4++) {
    iv11[i4] = u_bar->size[i4];
  }

  emxInit_real_T(sp, &u_ff, 2, &i_emlrtRTEI, true);
  i4 = u_ff->size[0] * u_ff->size[1];
  u_ff->size[0] = 4;
  u_ff->size[1] = iv11[1];
  emxEnsureCapacity_real_T1(sp, u_ff, i4, &i_emlrtRTEI);
  loop_ub = iv11[1] << 2;
  for (i4 = 0; i4 < loop_ub; i4++) {
    u_ff->data[i4] = 1.0;
  }

  emxInit_real_T2(sp, &s, 1, &j_emlrtRTEI, true);
  i4 = s->size[0];
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &r_emlrtDCI, sp);
  }

  s->size[0] = (int32_T)N;
  emxEnsureCapacity_real_T2(sp, s, i4, &j_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &r_emlrtDCI, sp);
  }

  loop_ub = (int32_T)N;
  for (i4 = 0; i4 < loop_ub; i4++) {
    s->data[i4] = 0.0;
  }

  emxInit_real_T(sp, &s_vec, 2, &k_emlrtRTEI, true);
  i4 = s_vec->size[0] * s_vec->size[1];
  s_vec->size[0] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &o_emlrtDCI, sp);
  }

  s_vec->size[1] = (int32_T)N;
  emxEnsureCapacity_real_T1(sp, s_vec, i4, &k_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &s_emlrtDCI, sp);
  }

  loop_ub = 12 * (int32_T)N;
  for (i4 = 0; i4 < loop_ub; i4++) {
    s_vec->data[i4] = 0.0;
  }

  emxInit_real_T1(sp, &S_mat, 3, &l_emlrtRTEI, true);
  i4 = S_mat->size[0] * S_mat->size[1] * S_mat->size[2];
  S_mat->size[0] = 12;
  S_mat->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &p_emlrtDCI, sp);
  }

  S_mat->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T(sp, S_mat, i4, &l_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &t_emlrtDCI, sp);
  }

  loop_ub = 144 * (int32_T)N;
  for (i4 = 0; i4 < loop_ub; i4++) {
    S_mat->data[i4] = 0.0;
  }

  i4 = K->size[0] * K->size[1] * K->size[2];
  K->size[0] = 4;
  K->size[1] = 12;
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &q_emlrtDCI, sp);
  }

  K->size[2] = (int32_T)N;
  emxEnsureCapacity_real_T(sp, K, i4, &m_emlrtRTEI);
  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &u_emlrtDCI, sp);
  }

  loop_ub = 48 * (int32_T)N;
  for (i4 = 0; i4 < loop_ub; i4++) {
    K->data[i4] = 0.0;
  }

  ii = 1;
  emxInit_real_T(sp, &b_x_bar, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &b_u_bar, 2, &f_emlrtRTEI, true);
  do {
    exitg1 = 0;
    st.site = &p_emlrtRSI;
    if ((norm(&st, u_ff) >= 1.0E-6) && (ii < 2)) {
      /*  Stop if feedforward increment converges */
      /*  Initialize S matrix (coefficients of quadratic functional) */
      i4 = x_bar->size[1];
      i5 = (int32_T)N;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &vb_emlrtBCI, sp);
      }

      i4 = s->size[0];
      i6 = (int32_T)N;
      if (!((i6 >= 1) && (i6 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &wb_emlrtBCI, sp);
      }

      st.site = &q_emlrtRSI;
      s->data[i6 - 1] = compute_qN(*(real_T (*)[12])&x_bar->data[x_bar->size[0] *
        (i5 - 1)], xf);
      loop_ub = s_vec->size[1];
      i4 = x_bar->size[1];
      i5 = (int32_T)N;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &xb_emlrtBCI, sp);
      }

      i4 = (int32_T)N;
      if (!((i4 >= 1) && (i4 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, loop_ub, &yb_emlrtBCI, sp);
      }

      compute_qN_vec(*(real_T (*)[12])&x_bar->data[x_bar->size[0] * (i5 - 1)],
                     xf, *(real_T (*)[12])&s_vec->data[s_vec->size[0] * (i4 - 1)]);
      i4 = x_bar->size[1];
      i5 = (int32_T)N;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &ub_emlrtBCI, sp);
      }

      loop_ub = S_mat->size[2];
      i4 = (int32_T)N;
      if (!((i4 >= 1) && (i4 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, loop_ub, &qb_emlrtBCI, sp);
      }

      for (i4 = 0; i4 < 12; i4++) {
        for (i5 = 0; i5 < 12; i5++) {
          S_mat->data[(i5 + S_mat->size[0] * i4) + S_mat->size[0] * S_mat->size
            [1] * ((int32_T)N - 1)] = iv12[i5 + 12 * i4];
        }
      }

      /*  Initialize time */
      t = (N - 1.0) * dt;

      /*  Backward propagation */
      i4 = (int32_T)((1.0 + (-1.0 - (N - 1.0))) / -1.0);
      emlrtForLoopVectorCheckR2012b(N - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i4,
        &v_emlrtRTEI, sp);
      ii = 0;
      while (ii <= i4 - 1) {
        k = ((int32_T)N - ii) - 1;

        /*  Update time */
        t -= dt;

        /*  Select current state and control vectors */
        i5 = x_bar->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &tb_emlrtBCI, sp);
        }

        i5 = u_bar->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &sb_emlrtBCI, sp);
        }

        /*  Compute linearized dynamics */
        st.site = &r_emlrtRSI;
        compute_A(*(real_T (*)[12])&x_bar->data[x_bar->size[0] * (k - 1)],
                  *(real_T (*)[4])&u_bar->data[u_bar->size[0] * (k - 1)], A);
        st.site = &s_emlrtRSI;
        compute_B(*(real_T (*)[12])&x_bar->data[x_bar->size[0] * (k - 1)], B);

        /*  Compute cost weighting terms */
        if (!((k >= 1) && (k <= 301))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, 301, &ac_emlrtBCI, sp);
        }

        st.site = &t_emlrtRSI;
        q = compute_q(t, *(real_T (*)[12])&x_bar->data[x_bar->size[0] * (k - 1)],
                      *(real_T (*)[4])&u_bar->data[u_bar->size[0] * (k - 1)],
                      *(real_T (*)[4])&u_bar->data[u_bar->size[0] * (k - 1)],
                      *(real_T (*)[12])&x_wp[12 * (k - 1)], t_wp);
        st.site = &u_emlrtRSI;
        compute_q_vec(t, *(real_T (*)[12])&x_bar->data[x_bar->size[0] * (k - 1)],
                      *(real_T (*)[12])&x_wp[12 * (k - 1)], t_wp, dq);
        st.site = &v_emlrtRSI;
        compute_Q_mat(t, t_wp, Q_mat);

        /*  Compute grouping terms */
        i5 = s_vec->size[1];
        i6 = k + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &rb_emlrtBCI, sp);
        }

        compute_r_vec(*(real_T (*)[4])&u_bar->data[u_bar->size[0] * (k - 1)],
                      *(real_T (*)[4])&u_bar->data[u_bar->size[0] * (k - 1)], g);
        for (i5 = 0; i5 < 4; i5++) {
          y[i5] = g[i5];
        }

        for (i5 = 0; i5 < 4; i5++) {
          alpha1 = 0.0;
          for (i6 = 0; i6 < 12; i6++) {
            alpha1 += B[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] * k];
          }

          g[i5] = y[i5] + alpha1;
        }

        st.site = &w_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((k + 1 >= 1) && (k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i5, &pb_emlrtBCI, &st);
        }

        loop_ub = k + 1;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            b[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
              S_mat->size[0] * S_mat->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        st.site = &w_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &G[0], &ldc_t);
        st.site = &x_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((k + 1 >= 1) && (k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i5, &ob_emlrtBCI, &st);
        }

        loop_ub = k + 1;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            b[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
              S_mat->size[0] * S_mat->size[1] * (loop_ub - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)4;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)12;
        lda_t = (ptrdiff_t)4;
        ldb_t = (ptrdiff_t)12;
        ldc_t = (ptrdiff_t)4;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &b_a[0], &ldc_t);
        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            alpha1 = 0.0;
            for (loop_ub = 0; loop_ub < 12; loop_ub++) {
              alpha1 += b_a[i5 + (loop_ub << 2)] * B[loop_ub + 12 * i6];
            }

            H[i5 + (i6 << 2)] = (real_T)R[i5 + (i6 << 2)] + alpha1;
          }
        }

        /*  Update feedback matrix and feedforward control */
        st.site = &y_emlrtRSI;
        inv(&st, H, c_a);
        for (i5 = 0; i5 < 16; i5++) {
          c_a[i5] = -c_a[i5];
        }

        loop_ub = K->size[2];
        if (!((k >= 1) && (k <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, loop_ub, &lb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * (k - 1)] =
              0.0;
            for (loop_ub = 0; loop_ub < 4; loop_ub++) {
              K->data[(i5 + K->size[0] * i6) + K->size[0] * K->size[1] * (k - 1)]
                += c_a[i5 + (loop_ub << 2)] * G[loop_ub + (i6 << 2)];
            }
          }
        }

        st.site = &ab_emlrtRSI;
        inv(&st, H, c_a);
        for (i5 = 0; i5 < 16; i5++) {
          c_a[i5] = -c_a[i5];
        }

        loop_ub = u_ff->size[1];
        if (!((k >= 1) && (k <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, loop_ub, &nb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 4; i5++) {
          u_ff->data[i5 + u_ff->size[0] * (k - 1)] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            u_ff->data[i5 + u_ff->size[0] * (k - 1)] += c_a[i5 + (i6 << 2)] *
              g[i6];
          }
        }

        /*  Update current coefficients of functional */
        st.site = &bb_emlrtRSI;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            d_a[i6 + 12 * i5] = A[i5 + 12 * i6];
          }
        }

        i5 = S_mat->size[2];
        if (!((k + 1 >= 1) && (k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i5, &mb_emlrtBCI, &st);
        }

        loop_ub = k + 1;
        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            b[i6 + 12 * i5] = S_mat->data[(i6 + S_mat->size[0] * i5) +
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
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &d_a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        i5 = K->size[2];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &kb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            B[i5 + 12 * i6] = 0.0;
            for (loop_ub = 0; loop_ub < 4; loop_ub++) {
              B[i5 + 12 * i6] += K->data[(loop_ub + K->size[0] * i5) + K->size[0]
                * K->size[1] * (k - 1)] * H[loop_ub + (i6 << 2)];
            }
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i6 + (i5 << 2)];
          }
        }

        i5 = K->size[2];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &jb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            b_a[i6 + (i5 << 2)] = K->data[(i6 + K->size[0] * i5) + K->size[0] *
              K->size[1] * (k - 1)];
          }
        }

        st.site = &bb_emlrtRSI;
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
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &e_a[0], &lda_t, &A[0],
              &ldb_t, &beta1, &b_y[0], &ldc_t);
        st.site = &bb_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &b[0], &ldc_t);
        st.site = &bb_emlrtRSI;
        i5 = K->size[2];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &ib_emlrtBCI, &st);
        }

        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            B[i6 + 12 * i5] = K->data[(i5 + K->size[0] * i6) + K->size[0] *
              K->size[1] * (k - 1)];
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            a[i6 + (i5 << 2)] = B[i6 + (i5 << 2)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &G[0],
              &ldb_t, &beta1, &d_a[0], &ldc_t);
        st.site = &bb_emlrtRSI;
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
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &hb_emlrtBCI, &st);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            b_a[i6 + (i5 << 2)] = K->data[(i6 + K->size[0] * i5) + K->size[0] *
              K->size[1] * (k - 1)];
          }
        }

        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)12;
        n_t = (ptrdiff_t)12;
        k_t = (ptrdiff_t)4;
        lda_t = (ptrdiff_t)12;
        ldb_t = (ptrdiff_t)4;
        ldc_t = (ptrdiff_t)12;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b_a[0],
              &ldb_t, &beta1, &e_a[0], &ldc_t);
        loop_ub = S_mat->size[2];
        if (!((k >= 1) && (k <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, loop_ub, &gb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 12; i6++) {
            S_mat->data[(i6 + S_mat->size[0] * i5) + S_mat->size[0] *
              S_mat->size[1] * (k - 1)] = (((Q_mat[i6 + 12 * i5] + b_y[i6 + 12 *
              i5]) + b[i6 + 12 * i5]) + d_a[i6 + 12 * i5]) + e_a[i6 + 12 * i5];
          }
        }

        i5 = s_vec->size[1];
        i6 = k + 1;
        if (!((i6 >= 1) && (i6 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &fb_emlrtBCI, sp);
        }

        i5 = K->size[2];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &eb_emlrtBCI, sp);
        }

        i5 = u_ff->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &db_emlrtBCI, sp);
        }

        i5 = K->size[2];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &cb_emlrtBCI, sp);
        }

        i5 = u_ff->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &bb_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            B[i5 + 12 * i6] = 0.0;
            for (loop_ub = 0; loop_ub < 4; loop_ub++) {
              B[i5 + 12 * i6] += K->data[(loop_ub + K->size[0] * i5) + K->size[0]
                * K->size[1] * (k - 1)] * H[loop_ub + (i6 << 2)];
            }
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          alpha1 = 0.0;
          for (i6 = 0; i6 < 12; i6++) {
            alpha1 += A[i6 + 12 * i5] * s_vec->data[i6 + s_vec->size[0] * k];
          }

          c_x_bar[i5] = dq[i5] + alpha1;
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_K[i5] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            alpha1 = b_K[i5] + B[i5 + 12 * i6] * u_ff->data[i6 + u_ff->size[0] *
              (k - 1)];
            b_K[i5] = alpha1;
          }
        }

        for (i5 = 0; i5 < 12; i5++) {
          alpha1 = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            alpha1 += K->data[(i6 + K->size[0] * i5) + K->size[0] * K->size[1] *
              (k - 1)] * g[i6];
          }

          dq[i5] = (c_x_bar[i5] + b_K[i5]) + alpha1;
        }

        for (i5 = 0; i5 < 12; i5++) {
          b_G[i5] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            alpha1 = b_G[i5] + G[i6 + (i5 << 2)] * u_ff->data[i6 + u_ff->size[0]
              * (k - 1)];
            b_G[i5] = alpha1;
          }
        }

        loop_ub = s_vec->size[1];
        if (!((k >= 1) && (k <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, loop_ub, &ab_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 12; i5++) {
          s_vec->data[i5 + s_vec->size[0] * (k - 1)] = dq[i5] + b_G[i5];
        }

        i5 = u_ff->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &y_emlrtBCI, sp);
        }

        for (i5 = 0; i5 < 4; i5++) {
          y[i5] = 0.0;
          for (i6 = 0; i6 < 4; i6++) {
            alpha1 = y[i5] + 0.5 * u_ff->data[i6 + u_ff->size[0] * (k - 1)] *
              H[i6 + (i5 << 2)];
            y[i5] = alpha1;
          }
        }

        i5 = u_ff->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &x_emlrtBCI, sp);
        }

        alpha1 = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          alpha1 += y[loop_ub] * u_ff->data[loop_ub + u_ff->size[0] * (k - 1)];
        }

        i5 = u_ff->size[1];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &w_emlrtBCI, sp);
        }

        beta1 = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          beta1 += u_ff->data[loop_ub + u_ff->size[0] * (k - 1)] * g[loop_ub];
        }

        i5 = s->size[0];
        if (!((k + 1 >= 1) && (k + 1 <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i5, &bc_emlrtBCI, sp);
        }

        i5 = s->size[0];
        if (!((k >= 1) && (k <= i5))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i5, &cc_emlrtBCI, sp);
        }

        s->data[k - 1] = ((q + s->data[k]) + alpha1) + beta1;

        /*          S_mat(:,:,k) */
        /*          s_vec(:,k) */
        /*          s(k) */
        ii++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &cb_emlrtRSI;
      for (i4 = 0; i4 < 2; i4++) {
        iv11[i4] = x_bar->size[i4];
      }

      i4 = b_x_bar->size[0] * b_x_bar->size[1];
      b_x_bar->size[0] = 12;
      b_x_bar->size[1] = iv11[1];
      emxEnsureCapacity_real_T1(&st, b_x_bar, i4, &n_emlrtRTEI);
      loop_ub = 12 * iv11[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        b_x_bar->data[i4] = 0.0;
      }

      for (i4 = 0; i4 < 2; i4++) {
        iv13[i4] = u_bar->size[i4];
      }

      i4 = b_u_bar->size[0] * b_u_bar->size[1];
      b_u_bar->size[0] = 4;
      b_u_bar->size[1] = iv13[1];
      emxEnsureCapacity_real_T1(&st, b_u_bar, i4, &o_emlrtRTEI);
      loop_ub = iv13[1] << 2;
      for (i4 = 0; i4 < loop_ub; i4++) {
        b_u_bar->data[i4] = 0.0;
      }

      if (!(1 <= iv11[1])) {
        emlrtDynamicBoundsCheckR2012b(1, 1, iv11[1], &s_emlrtBCI, &st);
      }

      for (i4 = 0; i4 < 12; i4++) {
        b_x_bar->data[i4] = x0[i4];
      }

      ii = 0;
      while (ii <= (int32_T)N - 2) {
        i4 = K->size[2];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &t_emlrtBCI, &st);
        }

        i4 = b_x_bar->size[1];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &r_emlrtBCI, &st);
        }

        i4 = x_bar->size[1];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &q_emlrtBCI, &st);
        }

        i4 = u_bar->size[1];
        i5 = 1 + ii;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &v_emlrtBCI, &st);
        }

        i4 = u_ff->size[1];
        i6 = 1 + ii;
        if (!((i6 >= 1) && (i6 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &u_emlrtBCI, &st);
        }

        for (i4 = 0; i4 < 12; i4++) {
          c_x_bar[i4] = b_x_bar->data[i4 + b_x_bar->size[0] * ii] - x_bar->
            data[i4 + x_bar->size[0] * ii];
        }

        loop_ub = b_u_bar->size[1];
        i4 = 1 + ii;
        if (!((i4 >= 1) && (i4 <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, loop_ub, &o_emlrtBCI, &st);
        }

        for (i4 = 0; i4 < 4; i4++) {
          alpha1 = 0.0;
          for (loop_ub = 0; loop_ub < 12; loop_ub++) {
            alpha1 += K->data[(i4 + K->size[0] * loop_ub) + K->size[0] * K->
              size[1] * ii] * c_x_bar[loop_ub];
          }

          b_u_bar->data[i4 + b_u_bar->size[0] * ii] = (u_bar->data[i4 +
            u_bar->size[0] * (i5 - 1)] + u_ff->data[i4 + u_ff->size[0] * (i6 - 1)])
            + alpha1;
        }

        /*      u(:,ii) = min(umax, max(umin, u(:,ii))); */
        b_st.site = &pd_emlrtRSI;
        i4 = b_x_bar->size[1];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &p_emlrtBCI, &b_st);
        }

        i4 = b_u_bar->size[1];
        i5 = ii + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &n_emlrtBCI, &b_st);
        }

        /*  dq = dynamics(q,u); */
        getDynSys(*(real_T (*)[12])&b_x_bar->data[b_x_bar->size[0] * ii],
                  *(real_T (*)[4])&b_u_bar->data[b_u_bar->size[0] * ii], dq);
        loop_ub = b_x_bar->size[1];
        if (!((ii + 2 >= 1) && (ii + 2 <= loop_ub))) {
          emlrtDynamicBoundsCheckR2012b(ii + 2, 1, loop_ub, &m_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < 12; i4++) {
          c_x_bar[i4] = b_x_bar->data[i4 + b_x_bar->size[0] * ii] + dq[i4] * dt;
        }

        for (i4 = 0; i4 < 12; i4++) {
          b_x_bar->data[i4 + b_x_bar->size[0] * (ii + 1)] = c_x_bar[i4];
        }

        ii++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      i4 = x_bar->size[0] * x_bar->size[1];
      x_bar->size[0] = 12;
      x_bar->size[1] = b_x_bar->size[1];
      emxEnsureCapacity_real_T1(sp, x_bar, i4, &p_emlrtRTEI);
      loop_ub = b_x_bar->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        for (i5 = 0; i5 < 12; i5++) {
          x_bar->data[i5 + x_bar->size[0] * i4] = b_x_bar->data[i5 +
            b_x_bar->size[0] * i4];
        }
      }

      i4 = u_bar->size[0] * u_bar->size[1];
      u_bar->size[0] = 4;
      u_bar->size[1] = b_u_bar->size[1];
      emxEnsureCapacity_real_T1(sp, u_bar, i4, &q_emlrtRTEI);
      loop_ub = b_u_bar->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        for (i5 = 0; i5 < 4; i5++) {
          u_bar->data[i5 + u_bar->size[0] * i4] = b_u_bar->data[i5 +
            b_u_bar->size[0] * i4];
        }
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

  emxFree_real_T(sp, &b_u_bar);
  emxFree_real_T(sp, &b_x_bar);
  emxFree_real_T(sp, &S_mat);
  emxFree_real_T(sp, &s_vec);
  emxFree_real_T(sp, &s);
  emxFree_real_T(sp, &u_ff);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (slqSolve.cpp) */
