/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeSLQTrajHoop_data.cpp
 *
 * Code generation for function 'computeSLQTrajHoop_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "computeSLQTrajHoop_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "computeSLQTrajHoop",                /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo d_emlrtRSI = { 40,         /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

emlrtRSInfo e_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

emlrtRSInfo g_emlrtRSI = { 3,          /* lineNo */
  "f",                                 /* fcnName */
  "/home/instructor/group3/ACSI/Project/f.m"/* pathName */
};

emlrtRSInfo h_emlrtRSI = { 27,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo i_emlrtRSI = { 28,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 29,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 30,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 31,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 32,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 33,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 34,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo p_emlrtRSI = { 35,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 39,         /* lineNo */
  "getDynSys",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/getDynSys.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 35,        /* lineNo */
  "compute_qN",                        /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_qN.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 25,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 26,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 27,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 28,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 29,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo hc_emlrtRSI = { 30,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo ic_emlrtRSI = { 31,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo jc_emlrtRSI = { 32,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 33,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 34,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo mc_emlrtRSI = { 39,        /* lineNo */
  "compute_A",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_A.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 18,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 19,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 20,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 21,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 22,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 23,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 27,        /* lineNo */
  "compute_B",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_B.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 50,        /* lineNo */
  "compute_q",                         /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_q.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 42,        /* lineNo */
  "compute_q_vec",                     /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_q_vec.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 9,         /* lineNo */
  "compute_Q_mat",                     /* fcnName */
  "/home/instructor/group3/ACSI/Project/compute_Q_mat.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

/* End of code generation (computeSLQTrajHoop_data.cpp) */
