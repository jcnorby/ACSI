/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * slqSolve_data.cpp
 *
 * Code generation for function 'slqSolve_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "slqSolve_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "slqSolve",                          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo b_emlrtRSI = { 16,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo c_emlrtRSI = { 34,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo d_emlrtRSI = { 35,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo e_emlrtRSI = { 38,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo f_emlrtRSI = { 39,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo g_emlrtRSI = { 40,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 70,         /* lineNo */
  "slqSolve",                          /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\slqSolve.m"/* pathName */
};

emlrtRSInfo ab_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 35,        /* lineNo */
  "compute_qN",                        /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_qN.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 25,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 26,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 27,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 28,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 29,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 30,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 31,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 32,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 33,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 34,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 39,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 18,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 19,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 20,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 21,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 22,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 23,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 27,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 38,        /* lineNo */
  "compute_q",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_q.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 30,        /* lineNo */
  "compute_q_vec",                     /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_q_vec.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 9,         /* lineNo */
  "compute_Q_mat",                     /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_Q_mat.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 9,         /* lineNo */
  "forwardIntTraj",                    /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\forwardIntTraj.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 3,         /* lineNo */
  "f",                                 /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\f.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 27,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 28,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo bd_emlrtRSI = { 29,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo cd_emlrtRSI = { 30,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo dd_emlrtRSI = { 31,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo ed_emlrtRSI = { 32,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo fd_emlrtRSI = { 33,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo gd_emlrtRSI = { 34,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo hd_emlrtRSI = { 35,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo id_emlrtRSI = { 39,        /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo jd_emlrtRSI = { 23,        /* lineNo */
  "intermediateCost",                  /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\intermediateCost.m"/* pathName */
};

emlrtRSInfo kd_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

const int8_T iv0[9] = { 100, 0, 0, 0, 100, 0, 0, 0, 100 };

/* End of code generation (slqSolve_data.cpp) */
