/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_computeSLQTrajHoop_api.cpp
 *
 * Code generation for function '_coder_computeSLQTrajHoop_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "computeSLQTrajHoop.h"
#include "_coder_computeSLQTrajHoop_api.h"
#include "computeSLQTrajHoop_emxutil.h"
#include "inv.h"
#include "computeSLQTrajHoop_mexutil.h"
#include "computeSLQTrajHoop_data.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_computeSLQTrajHoop_api",     /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t_current,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12];
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0_wp,
  const char_T *identifier))[3];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *flag_wp,
  const char_T *identifier);
static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m9;
  static const int32_T iv8[2] = { 0, 0 };

  y = NULL;
  m9 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m9, &u->data[0]);
  emlrtSetDimensions((mxArray *)m9, u->size, 2);
  emlrtAssign(&y, m9);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t_current,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(t_current), &thisId);
  emlrtDestroyArray(&t_current);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m10;
  static const int32_T iv9[3] = { 0, 0, 0 };

  y = NULL;
  m10 = emlrtCreateNumericArray(3, iv9, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m10, &u->data[0]);
  emlrtSetDimensions((mxArray *)m10, u->size, 3);
  emlrtAssign(&y, m10);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12]
{
  real_T (*y)[12];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(x0), &thisId);
  emlrtDestroyArray(&x0);
  return y;
}
  static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[12]
{
  real_T (*y)[12];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0_wp,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(x0_wp), &thisId);
  emlrtDestroyArray(&x0_wp);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *flag_wp,
  const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(flag_wp), &thisId);
  emlrtDestroyArray(&flag_wp);
  return y;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 1U, *(int32_T (*)[1])&dims[0]);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "logical",
    false, 0U, (int32_T *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void computeSLQTrajHoop_api(const mxArray * const prhs[11], int32_T nlhs, const
  mxArray *plhs[6])
{
  emxArray_real_T *x;
  emxArray_real_T *K;
  emxArray_real_T *u;
  emxArray_real_T *x_wp;
  real_T t_current;
  real_T N;
  real_T dt;
  real_T (*x0)[12];
  real_T (*xf)[12];
  real_T umax;
  real_T height_wp;
  real_T (*x0_wp)[3];
  real_T (*dx0_wp)[3];
  real_T (*ddx0_wp)[3];
  boolean_T flag_wp;
  real_T i_wp;
  real_T t_wp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &i_emlrtRTEI, true);
  emxInit_real_T(&st, &K, 3, &i_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &i_emlrtRTEI, true);
  emxInit_real_T(&st, &x_wp, 2, &i_emlrtRTEI, true);

  /* Marshall function inputs */
  t_current = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "t_current");
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "N");
  dt = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dt");
  x0 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "x0");
  xf = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "xf");
  umax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "umax");
  height_wp = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "height_wp");
  x0_wp = g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "x0_wp");
  dx0_wp = g_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "dx0_wp");
  ddx0_wp = g_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "ddx0_wp");
  flag_wp = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "flag_wp");

  /* Invoke the target function */
  computeSLQTrajHoop(&st, t_current, N, dt, *x0, *xf, umax, height_wp, *x0_wp,
                     *dx0_wp, *ddx0_wp, flag_wp, x, K, u, &i_wp, &t_wp, x_wp);

  /* Marshall function outputs */
  x->canFreeData = false;
  plhs[0] = b_emlrt_marshallOut(x);
  emxFree_real_T(&x);
  if (nlhs > 1) {
    K->canFreeData = false;
    plhs[1] = c_emlrt_marshallOut(K);
  }

  emxFree_real_T(&K);
  if (nlhs > 2) {
    u->canFreeData = false;
    plhs[2] = b_emlrt_marshallOut(u);
  }

  emxFree_real_T(&u);
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(i_wp);
  }

  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(t_wp);
  }

  if (nlhs > 5) {
    x_wp->canFreeData = false;
    plhs[5] = b_emlrt_marshallOut(x_wp);
  }

  emxFree_real_T(&x_wp);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_computeSLQTrajHoop_api.cpp) */
