/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_slqSolve_api.cpp
 *
 * Code generation for function '_coder_slqSolve_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "slqSolve.h"
#include "_coder_slqSolve_api.h"
#include "slqSolve_emxutil.h"
#include "slqSolve_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "_coder_slqSolve_api",               /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_bar,
  const char_T *identifier))[3612];
static void c_emlrt_marshallOut(const real_T u[1800], const mxArray *y);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3612];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u_bar,
  const char_T *identifier))[1800];
static void emlrt_marshallOut(const real_T u[3612], const mxArray *y);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1800];
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N, const
  char_T *identifier);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3612];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1800];
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12];

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv9[3] = { 0, 0, 0 };

  y = NULL;
  m3 = emlrtCreateNumericArray(3, iv9, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m3, u->size, 3);
  emlrtAssign(&y, m3);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_bar,
  const char_T *identifier))[3612]
{
  real_T (*y)[3612];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(x_bar), &thisId);
  emlrtDestroyArray(&x_bar);
  return y;
}
  static void c_emlrt_marshallOut(const real_T u[1800], const mxArray *y)
{
  static const int32_T iv10[2] = { 6, 300 };

  emlrtMxSetData((mxArray *)y, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)y, *(int32_T (*)[2])&iv10[0], 2);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3612]
{
  real_T (*y)[3612];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u_bar,
  const char_T *identifier))[1800]
{
  real_T (*y)[1800];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u_bar), &thisId);
  emlrtDestroyArray(&u_bar);
  return y;
}

static void emlrt_marshallOut(const real_T u[3612], const mxArray *y)
{
  static const int32_T iv8[2] = { 12, 301 };

  emlrtMxSetData((mxArray *)y, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)y, *(int32_T (*)[2])&iv8[0], 2);
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1800]
{
  real_T (*y)[1800];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(N), &thisId);
  emlrtDestroyArray(&N);
  return y;
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12]
{
  real_T (*y)[12];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(x0), &thisId);
  emlrtDestroyArray(&x0);
  return y;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[12]
{
  real_T (*y)[12];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3612]
{
  real_T (*ret)[3612];
  static const int32_T dims[2] = { 12, 301 };

  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 2U, *(int32_T (*)[2])&dims[0]);
  ret = (real_T (*)[3612])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1800]
{
  real_T (*ret)[1800];
  static const int32_T dims[2] = { 6, 300 };

  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 2U, *(int32_T (*)[2])&dims[0]);
  ret = (real_T (*)[1800])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 0U, (int32_T *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12]
{
  real_T (*ret)[12];
  static const int32_T dims[1] = { 12 };

  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 1U, *(int32_T (*)[1])&dims[0]);
  ret = (real_T (*)[12])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void slqSolve_api(const mxArray * const prhs[8], int32_T nlhs, const mxArray
                    *plhs[3])
{
  emxArray_real_T *K;
  const mxArray *prhs_copy_idx_0;
  const mxArray *prhs_copy_idx_1;
  real_T (*x_bar)[3612];
  real_T (*u_bar)[1800];
  real_T N;
  real_T dt;
  real_T (*x0)[12];
  real_T (*x_wp)[3612];
  real_T t_wp;
  real_T (*xf)[12];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &K, 3, &emlrtRTEI, true);
  prhs_copy_idx_0 = emlrtProtectR2012b(prhs[0], 0, true, -1);
  prhs_copy_idx_1 = emlrtProtectR2012b(prhs[1], 1, true, -1);

  /* Marshall function inputs */
  x_bar = c_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "x_bar");
  u_bar = e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_1), "u_bar");
  N = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "N");
  dt = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "dt");
  x0 = i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "x0");
  x_wp = c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "x_wp");
  t_wp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "t_wp");
  xf = i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "xf");

  /* Invoke the target function */
  slqSolve(&st, *x_bar, *u_bar, N, dt, *x0, *x_wp, t_wp, *xf, K);

  /* Marshall function outputs */
  emlrt_marshallOut(*x_bar, prhs_copy_idx_0);
  plhs[0] = prhs_copy_idx_0;
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(K);
  }

  K->canFreeData = false;
  emxFree_real_T(&st, &K);
  if (nlhs > 2) {
    c_emlrt_marshallOut(*u_bar, prhs_copy_idx_1);
    plhs[2] = prhs_copy_idx_1;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_slqSolve_api.cpp) */
