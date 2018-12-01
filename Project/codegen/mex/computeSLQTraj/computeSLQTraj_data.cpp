/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTraj_data.cpp
 *
 * Code generation for function 'computeSLQTraj_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "computeSLQTraj_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "computeSLQTraj",                    /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo d_emlrtRSI = { 3,          /* lineNo */
  "f",                                 /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\f.m"/* pathName */
};

emlrtRSInfo e_emlrtRSI = { 27,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo f_emlrtRSI = { 28,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo g_emlrtRSI = { 29,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo h_emlrtRSI = { 30,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo i_emlrtRSI = { 31,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 32,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 33,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 34,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 35,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 39,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\getDynSys.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 35,        /* lineNo */
  "compute_qN",                        /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_qN.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 25,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 26,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 27,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 28,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 29,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 30,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 31,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo hc_emlrtRSI = { 32,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo ic_emlrtRSI = { 33,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo jc_emlrtRSI = { 34,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 39,        /* lineNo */
  "compute_A",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_A.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 18,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo mc_emlrtRSI = { 19,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 20,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 21,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 22,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 23,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 27,        /* lineNo */
  "compute_B",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_B.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 50,        /* lineNo */
  "compute_q",                         /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_q.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 42,        /* lineNo */
  "compute_q_vec",                     /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_q_vec.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 9,         /* lineNo */
  "compute_Q_mat",                     /* fcnName */
  "C:\\Users\\Joe\\Documents\\MATLAB\\5 Fall 2018\\ACSI\\Project\\compute_Q_mat.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

/* End of code generation (computeSLQTraj_data.cpp) */
