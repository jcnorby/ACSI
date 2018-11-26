/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_A.cpp
 *
 * Code generation for function 'compute_A'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "compute_A.h"

/* Function Definitions */
void compute_A(const real_T in1[12], const real_T in2[4], real_T A[144])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T dv0[144];
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  int32_T i1;

  /* COMPUTE_A */
  /*     A = COMPUTE_A(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.1. */
  /*     25-Nov-2018 15:44:56 */
  /*  Version 1. Inputs are (q,u). */
  t2 = muDoubleScalarCos(in1[3]);
  t3 = muDoubleScalarCos(in1[5]);
  t4 = muDoubleScalarSin(in1[3]);
  t5 = muDoubleScalarSin(in1[5]);
  t6 = muDoubleScalarSin(in1[4]);
  t7 = muDoubleScalarCos(in1[4]);
  t8 = t2 * t2;
  t9 = t4 * t4;
  t10 = t8 * t8;
  t11 = t7 * t7;
  t12 = in1[11] * in1[11];
  t13 = t11 * t11;
  t14 = t9 * t9;
  t15 = in1[10] * in1[10];
  t16 = t6 * t6;
  t17 = 1.0 / (t7 * t7);
  t20 = 1.0 / ((t10 + t14) + t8 * t9 * 2.0);
  t21 = 1.0 / t7;
  t22 = 1.0 / muDoubleScalarPower(t7, 3.0);
  t23 = in1[10] * t6 * t7 * t8 * 3.0005826889194818E+33;
  t24 = in1[10] * t6 * t7 * t9 * 5.2962092039361935E+33;
  dv0[0] = 1.0;
  memset(&dv0[1], 0, 12U * sizeof(real_T));
  dv0[13] = 1.0;
  memset(&dv0[14], 0, 12U * sizeof(real_T));
  dv0[26] = 1.0;
  memset(&dv0[27], 0, 12U * sizeof(real_T));
  dv0[39] = 1.0;
  dv0[40] = 0.0;
  dv0[41] = 0.0;
  dv0[42] = in2[0] * (t2 * t5 - t3 * t4 * t6) * 0.37037037037037035;
  dv0[43] = in2[0] * (t2 * t3 + t4 * t5 * t6) * -0.37037037037037035;
  dv0[44] = t4 * t7 * in2[0] * -0.37037037037037035;
  dv0[45] = t17 * t20 * (((((((((((((((((((((((((((((((((((t8 * t10 * t12 * t13 *
    -4.0519190897584128E+33 + t8 * t10 * t11 * t15 * 4.0519190897584128E+33) -
    t9 * t10 * t12 * t13 * 4.0519190897584162E+33) + t9 * t10 * t11 * t15 *
    4.0519190897584162E+33) + t8 * t11 * t12 * t16 * 2.2956265150167119E+33) +
    t8 * t12 * t13 * t14 * 4.0519190897584162E+33) - t8 * t11 * t14 * t15 *
    4.0519190897584162E+33) - t9 * t11 * t12 * t16 * 2.2956265150167119E+33) +
    t9 * t12 * t13 * t14 * 4.0519190897584128E+33) - t9 * t11 * t14 * t15 *
    4.0519190897584128E+33) - t10 * t11 * t12 * t16 * 6.3475456047751256E+33) +
    t11 * t12 * t14 * t16 * 6.3475456047751256E+33) + t2 * t4 * t6 * in2[3] *
    2.7658150783333879E+35) + t2 * t4 * t16 * in2[1] * 2.7658150783333879E+35) +
    t6 * t7 * t8 * in2[2] * 1.382907539166694E+35) - t6 * t7 * t9 * in2[2] *
    1.382907539166694E+35) + in1[9] * in1[11] * t6 * t8 * t11 *
    2.2956265150167119E+33) - in1[9] * in1[11] * t6 * t9 * t11 *
    2.2956265150167119E+33) + in1[9] * in1[11] * t6 * t10 * t11 *
    6.3475456047751256E+33) - in1[9] * in1[11] * t6 * t11 * t14 *
    8.1038381795168267E+33) - in1[9] * in1[11] * t4 * t6 * t8 * t11 *
    3.5125851494834022E+33) + in1[9] * in1[11] * t4 * t6 * t9 * t11 *
    1.7562925747417011E+33) + in1[9] * in1[11] * t6 * t8 * t9 * t11 *
    5.2688777242251033E+33) + in1[9] * in1[10] * t2 * t4 * t6 * t7 *
    4.5912530300334227E+33) - in1[11] * in1[10] * t2 * t4 * t7 * t16 *
    4.5912530300334227E+33) - in1[9] * in1[10] * t2 * t4 * t6 * t7 * t8 *
    1.2695091209550251E+34) - in1[9] * in1[10] * t2 * t4 * t6 * t7 * t9 *
    1.2695091209550251E+34) + in1[11] * in1[10] * t2 * t4 * t7 * t8 * t11 *
    4.6116860184273879E+18) - in1[11] * in1[10] * t2 * t4 * t7 * t9 * t11 *
    4.6116860184273879E+18) + in1[11] * in1[10] * t2 * t4 * t7 * t10 * t11 *
    1.6207676359033651E+34) + in1[11] * in1[10] * t2 * t4 * t7 * t8 * t16 *
    1.518367143790581E+34) + in1[11] * in1[10] * t2 * t4 * t7 * t9 * t16 *
    3.1391347796939459E+34) + in1[11] * in1[10] * t2 * t4 * t7 * t11 * t14 *
    1.6207676359033651E+34) - in1[10] * in1[5] * t2 * t4 * t7 * t8 * t16 *
    2.4885802283555589E+33) - in1[10] * in1[5] * t2 * t4 * t7 * t9 * t16 *
    1.869625658738921E+34) + in1[11] * in1[10] * t2 * t4 * t7 * t8 * t9 * t11 *
    3.24153527180673E+34) * 1.8881429367570871E-36;
  dv0[46] = t20 * t21 * (((((((((((((((((((((((t8 * in2[3] *
    -1.382907539166694E+35 + t9 * in2[3] * 1.382907539166694E+35) - t6 * t8 *
    in2[1] * 1.382907539166694E+35) + t6 * t9 * in2[1] * 1.382907539166694E+35)
    - in1[9] * in1[10] * t7 * t8 * 2.2956265150167119E+33) + in1[9] * in1[10] *
    t7 * t9 * 2.2956265150167119E+33) + in1[9] * in1[10] * t7 * t10 *
    6.3475456047751256E+33) - in1[9] * in1[10] * t7 * t14 *
    6.3475456047751256E+33) + t2 * t4 * t7 * in2[2] * 2.7658150783333879E+35) +
    in1[9] * in1[11] * t2 * t4 * t11 * 4.5912530300334227E+33) + in1[9] * in1[11]
    * t2 * t8 * t11 * 4.0519190897584128E+33) - in1[9] * in1[11] * t2 * t9 * t11
    * 1.21695863446669E+33) + in1[11] * in1[10] * t6 * t7 * t8 *
    2.2956265150167119E+33) - in1[11] * in1[10] * t6 * t7 * t9 *
    2.2956265150167119E+33) - in1[11] * in1[10] * t6 * t7 * t10 *
    2.2956265150167119E+33) + in1[11] * in1[10] * t6 * t7 * t14 *
    6.3475456047751256E+33) - in1[10] * in1[5] * t6 * t7 * t10 *
    4.0519190897584128E+33) + t2 * t4 * t6 * t11 * t12 * 4.5912530300334227E+33)
    + in1[10] * in1[5] * t6 * t7 * t8 * t9 * 1.2155757269275239E+34) - t2 * t4 *
    t6 * t8 * t11 * t12 * 1.2695091209550251E+34) - t2 * t4 * t6 * t9 * t11 *
    t12 * 1.2695091209550251E+34) + in1[9] * in1[11] * t2 * t4 * t8 * t11 *
    4.591253030033421E+33) + in1[9] * in1[11] * t2 * t4 * t9 * t11 *
    1.161642332900023E+34) - in1[11] * in1[10] * t6 * t7 * t8 * t9 *
    1.2155757269275239E+34) * -1.8881429367570871E-36;
  dv0[47] = t17 * t20 * ((((((((((((((((((((((t2 * t4 * in2[3] *
    2.7658150783333879E+35 + t7 * t8 * in2[2] * 1.382907539166694E+35) - t7 * t9
    * in2[2] * 1.382907539166694E+35) + in1[9] * in1[11] * t8 * t11 *
    2.2956265150167119E+33) - in1[9] * in1[11] * t9 * t11 *
    2.2956265150167119E+33) + in1[9] * in1[11] * t10 * t11 *
    6.3475456047751256E+33) - in1[9] * in1[11] * t11 * t14 *
    8.1038381795168267E+33) + t6 * t8 * t11 * t12 * 2.2956265150167119E+33) - t6
    * t9 * t11 * t12 * 2.2956265150167119E+33) - t6 * t10 * t11 * t12 *
    6.3475456047751256E+33) + t6 * t11 * t12 * t14 * 6.3475456047751256E+33) +
    t2 * t4 * t6 * in2[1] * 2.7658150783333879E+35) - in1[9] * in1[11] * t4 * t8
    * t11 * 3.5125851494834022E+33) + in1[9] * in1[11] * t4 * t9 * t11 *
    1.7562925747417011E+33) + in1[9] * in1[11] * t8 * t9 * t11 *
    5.2688777242251033E+33) + in1[9] * in1[10] * t2 * t4 * t7 *
    4.5912530300334227E+33) - in1[9] * in1[10] * t2 * t4 * t7 * t8 *
    1.2695091209550251E+34) - in1[9] * in1[10] * t2 * t4 * t7 * t9 *
    1.2695091209550251E+34) - in1[11] * in1[10] * t2 * t4 * t6 * t7 *
    4.5912530300334227E+33) + in1[11] * in1[10] * t2 * t4 * t6 * t7 * t8 *
    1.518367143790581E+34) + in1[11] * in1[10] * t2 * t4 * t6 * t7 * t9 *
    3.1391347796939459E+34) - in1[10] * in1[5] * t2 * t4 * t6 * t7 * t8 *
    2.4885802283555589E+33) - in1[10] * in1[5] * t2 * t4 * t6 * t7 * t9 *
    1.869625658738921E+34) * 1.8881429367570871E-36;
  dv0[48] = 0.0;
  dv0[49] = 0.0;
  dv0[50] = 0.0;
  dv0[51] = 0.0;
  dv0[52] = 1.0;
  dv0[53] = 0.0;
  dv0[54] = t2 * t3 * t7 * in2[0] * 0.37037037037037035;
  dv0[55] = t2 * t5 * t7 * in2[0] * 0.37037037037037035;
  dv0[56] = t2 * t6 * in2[0] * -0.37037037037037035;
  d1 = (((((((((((t7 * t8 * in2[3] * -1.8075799330840252E+35 - t7 * t9 * in2[3] *
                  3.1904874722507191E+35) - in1[9] * in1[10] * t8 * t11 *
                 3.0005826889194818E+33) - in1[9] * in1[10] * t9 * t11 *
                5.2962092039361935E+33) - in1[9] * in1[10] * t10 * t11 *
               2.2956265150167119E+33) + in1[9] * in1[10] * t8 * t16 *
              3.0005826889194818E+33) + in1[9] * in1[10] * t9 * t16 *
             5.2962092039361935E+33) + in1[9] * in1[10] * t11 * t14 *
            4.0519190897584128E+33) + in1[9] * in1[10] * t10 * t16 *
           2.2956265150167119E+33) - in1[9] * in1[10] * t14 * t16 *
          4.0519190897584128E+33) - t2 * t4 * t11 * in2[2] *
         1.382907539166694E+35) - t6 * t7 * t8 * in2[1] * 3.61515986616805E+35)
    - t6 * t7 * t9 * in2[1] * 6.3809749445014382E+35;
  d2 = t2 * t4 * t16 * in2[2] * 1.382907539166694E+35;
  d3 = t6 * t7 * t10 * in2[1];
  d4 = t6 * t7 * t14 * in2[1];
  d5 = in1[9] * in1[10] * t8 * t9;
  d6 = in1[9] * in1[10] * t8 * t9;
  d7 = in1[11] * in1[10] * t6;
  d8 = in1[11] * in1[10] * t6;
  d9 = in1[11] * in1[10];
  d10 = in1[11] * in1[10];
  d11 = in1[11];
  d12 = in1[10];
  dv0[57] = t17 * t20 * ((((((((((((((((((((((((((((((((((((((((((((d1 + d2) +
    d3 * 6.3809749445014382E+35) + d4 * 6.3809749445014382E+35) + d5 * t11 *
    1.7562925747417011E+33) - d6 * t16 * 1.7562925747417011E+33) + d7 * t8 * t11
    * 6.0011653778389637E+33) + d8 * t9 * t11 * 1.0592418407872389E+34) + d9 *
    t6 * t10 * t11 * 9.8874622339696168E+33) - d10 * t6 * t8 * t16 *
    3.0005826889194818E+33) - d11 * d12 * t6 * t9 * t16 * 5.2962092039361935E+33)
    - in1[11] * in1[10] * t6 * t11 * t14 * 1.3400047383453019E+34) + in1[11] *
    in1[10] * t6 * t10 * t16 * 3.0005826889194818E+33) + in1[11] * in1[10] * t6 *
    t14 * t16 * 1.46443374976308E+34) - in1[10] * in1[5] * t6 * t10 * t11 *
    1.0592418407872389E+34) + in1[10] * in1[5] * t6 * t10 * t16 *
    5.2962092039361935E+33) + t6 * t7 * t8 * t9 * in2[1] *
    1.2761949889002879E+36) - in1[10] * in1[5] * t6 * t8 * t9 * t11 *
    1.869625658738921E+34) + in1[10] * in1[5] * t6 * t8 * t9 * t16 *
    9.3481282936946074E+33) - t2 * t4 * t6 * t7 * t11 * t12 *
    4.5912530300334239E+33) + t2 * t4 * t6 * t7 * t10 * t15 *
    8.1038381795168255E+33) + t2 * t4 * t6 * t7 * t12 * t16 *
    4.5912530300334239E+33) + t2 * t4 * t6 * t7 * t14 * t15 *
    8.1038381795168255E+33) - in1[9] * in1[11] * t2 * t4 * t7 * t11 *
    2.2956265150167119E+33) + in1[9] * in1[11] * t2 * t4 * t7 * t16 *
    4.5912530300334239E+33) + in1[9] * in1[11] * t2 * t7 * t9 * t11 *
    1.7562925747417011E+33) - in1[9] * in1[11] * t2 * t7 * t9 * t16 *
    3.5125851494834022E+33) + in1[11] * in1[10] * t6 * t8 * t9 * t11 *
    4.5912530300334279E+33) - in1[11] * in1[10] * t6 * t8 * t10 * t11 *
    1.2155757269275239E+34) - in1[11] * in1[10] * t6 * t9 * t10 * t11 *
    1.2155757269275239E+34) + in1[11] * in1[10] * t6 * t8 * t9 * t16 *
    1.359300109679187E+34) + in1[11] * in1[10] * t6 * t8 * t11 * t14 *
    1.2155757269275239E+34) + in1[11] * in1[10] * t6 * t9 * t11 * t14 *
    1.2155757269275239E+34) - in1[9] * in1[11] * t2 * t4 * t7 * t8 * t11 *
    6.3475456047751256E+33) - in1[9] * in1[11] * t2 * t4 * t7 * t9 * t11 *
    8.1038381795168267E+33) + in1[9] * in1[11] * t2 * t4 * t7 * t8 * t16 *
    1.2695091209550251E+34) + in1[9] * in1[11] * t2 * t4 * t7 * t9 * t16 *
    1.6207676359033651E+34) + t2 * t4 * t6 * t7 * t8 * t11 * t12 *
    1.2695091209550251E+34) + t2 * t4 * t6 * t7 * t8 * t9 * t15 *
    1.6207676359033651E+34) + t2 * t4 * t6 * t7 * t9 * t11 * t12 *
    1.2695091209550251E+34) - t2 * t4 * t6 * t7 * t10 * t11 * t12 *
    1.6207676359033651E+34) - t2 * t4 * t6 * t7 * t8 * t12 * t16 *
    1.2695091209550251E+34) - t2 * t4 * t6 * t7 * t9 * t12 * t16 *
    1.2695091209550251E+34) - t2 * t4 * t6 * t7 * t11 * t12 * t14 *
    1.6207676359033651E+34) - t2 * t4 * t6 * t7 * t8 * t9 * t11 * t12 *
    3.2415352718067311E+34) * -1.8881429367570871E-36 + t6 * t20 * t22 *
    (((((((((((((((((((((((((((((((((((((((t6 * t8 * in2[3] *
    1.8075799330840252E+35 + t6 * t9 * in2[3] * 3.1904874722507191E+35) + t10 *
    t11 * in2[1] * 3.1904874722507191E+35) + t8 * t16 * in2[1] *
    1.8075799330840252E+35) + t9 * t16 * in2[1] * 3.1904874722507191E+35) + t11 *
    t14 * in2[1] * 3.1904874722507191E+35) + t8 * t9 * t11 * in2[1] *
    6.3809749445014382E+35) + in1[9] * in1[10] * t6 * t7 * t8 *
    3.0005826889194818E+33) + in1[9] * in1[10] * t6 * t7 * t9 *
    5.2962092039361935E+33) + in1[9] * in1[10] * t6 * t7 * t10 *
    2.2956265150167119E+33) - in1[9] * in1[10] * t6 * t7 * t14 *
    4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t10 * t11 *
    5.2962092039361935E+33) - in1[11] * in1[10] * t7 * t8 * t16 *
    3.0005826889194818E+33) - in1[11] * in1[10] * t7 * t9 * t16 *
    5.2962092039361935E+33) + in1[11] * in1[10] * t7 * t11 * t14 *
    5.2962092039361935E+33) + in1[11] * in1[10] * t7 * t10 * t16 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t7 * t14 * t16 *
    1.46443374976308E+34) + in1[10] * in1[5] * t7 * t10 * t16 *
    5.2962092039361935E+33) - t2 * t4 * t10 * t12 * t13 * 4.0519190897584128E+33)
    + t2 * t4 * t10 * t11 * t15 * 4.0519190897584128E+33) + t2 * t4 * t11 * t12 *
    t16 * 2.2956265150167119E+33) - t2 * t4 * t12 * t13 * t14 *
                       4.0519190897584128E+33) + t2 * t4 * t11 * t14 * t15 *
                      4.0519190897584128E+33) + t2 * t4 * t6 * t7 * in2[2] *
                     1.382907539166694E+35) + in1[10] * in1[5] * t7 * t8 * t9 *
                    t16 * 9.3481282936946074E+33) - t2 * t4 * t8 * t9 * t12 *
                   t13 * 8.1038381795168267E+33) + t2 * t4 * t8 * t9 * t11 * t15
                  * 8.1038381795168267E+33) - t2 * t4 * t8 * t11 * t12 * t16 *
                 6.3475456047751256E+33) - t2 * t4 * t9 * t11 * t12 * t16 *
                6.3475456047751256E+33) + in1[9] * in1[11] * t2 * t4 * t6 * t11 *
               2.2956265150167119E+33) - in1[9] * in1[11] * t2 * t6 * t9 * t11 *
              1.7562925747417011E+33) - in1[9] * in1[10] * t6 * t7 * t8 * t9 *
             1.7562925747417011E+33) + in1[11] * in1[10] * t7 * t8 * t9 * t11 *
            1.0592418407872389E+34) - in1[11] * in1[10] * t7 * t8 * t10 * t11 *
           4.0519190897584128E+33) - in1[11] * in1[10] * t7 * t9 * t10 * t11 *
          4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t8 * t9 * t16 *
         1.359300109679187E+34) + in1[11] * in1[10] * t7 * t8 * t11 * t14 *
        4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t9 * t11 * t14 *
       4.0519190897584128E+33) + in1[9] * in1[11] * t2 * t4 * t6 * t8 * t11 *
      6.3475456047751256E+33) + in1[9] * in1[11] * t2 * t4 * t6 * t9 * t11 *
     8.1038381795168267E+33) * 3.7762858735141741E-36;
  dv0[58] = t20 * t21 * (((((((((((((((((((((((((((((t6 * t8 * in2[2] *
    3.1904874722507191E+35 + t6 * t9 * in2[2] * 1.8075799330840252E+35) - t7 *
    t8 * t11 * t12 * 5.2962092039361935E+33) - t7 * t9 * t11 * t12 *
    3.0005826889194818E+33) + t7 * t10 * t11 * t12 * 9.3481282936946074E+33) +
    t7 * t8 * t12 * t16 * 1.0592418407872389E+34) + t7 * t9 * t12 * t16 *
    6.0011653778389637E+33) + t7 * t11 * t12 * t14 * 3.0005826889194818E+33) -
    t7 * t10 * t12 * t16 * 1.869625658738921E+34) - t7 * t12 * t14 * t16 *
    6.0011653778389637E+33) - t2 * t4 * t7 * in2[1] * 1.382907539166694E+35) +
    in1[9] * in1[11] * t6 * t7 * t8 * 1.0592418407872389E+34) + in1[9] * in1[11]
    * t6 * t7 * t9 * 6.0011653778389637E+33) + in1[9] * in1[11] * t6 * t7 * t10 *
    8.1038381795168255E+33) + in1[9] * in1[10] * t2 * t4 * t6 *
    2.2956265150167119E+33) + in1[11] * in1[10] * t2 * t4 * t11 *
    2.2956265150167119E+33) - in1[11] * in1[10] * t2 * t4 * t16 *
    2.2956265150167119E+33) + t7 * t8 * t9 * t11 * t12 * 1.234871098261409E+34)
    - t7 * t8 * t9 * t12 * t16 * 2.4697421965228181E+34) - in1[10] * in1[5] * t2
    * t4 * t8 * t11 * 4.0519190897584128E+33) + in1[10] * in1[5] * t2 * t4 * t8 *
    t16 * 4.0519190897584128E+33) - in1[9] * in1[11] * t4 * t6 * t7 * t8 *
    8.1038381795168255E+33) - in1[9] * in1[11] * t4 * t6 * t7 * t9 *
    4.5912530300334239E+33) + in1[9] * in1[11] * t6 * t7 * t8 * t9 *
    1.161642332900023E+34) - in1[9] * in1[10] * t2 * t4 * t6 * t8 *
    6.3475456047751256E+33) - in1[9] * in1[10] * t2 * t4 * t6 * t9 *
    6.3475456047751256E+33) - in1[11] * in1[10] * t2 * t4 * t8 * t11 *
    2.2956265150167119E+33) - in1[11] * in1[10] * t2 * t4 * t9 * t11 *
    6.3475456047751256E+33) + in1[11] * in1[10] * t2 * t4 * t8 * t16 *
    2.2956265150167119E+33) + in1[11] * in1[10] * t2 * t4 * t9 * t16 *
    6.3475456047751256E+33) * -1.8881429367570871E-36 + t6 * t17 * t20 *
    (((((((((((((((((((((t2 * t4 * in2[3] * 1.382907539166694E+35 + t7 * t8 *
    in2[2] * 3.1904874722507191E+35) + t7 * t9 * in2[2] * 1.8075799330840252E+35)
                       + in1[9] * in1[11] * t8 * t11 * 5.2962092039361935E+33) +
                      in1[9] * in1[11] * t9 * t11 * 3.0005826889194818E+33) +
                     in1[9] * in1[11] * t10 * t11 * 4.0519190897584128E+33) + t6
                    * t8 * t11 * t12 * 5.2962092039361935E+33) + t6 * t9 * t11 *
                   t12 * 3.0005826889194818E+33) - t6 * t10 * t11 * t12 *
                  9.3481282936946074E+33) - t6 * t11 * t12 * t14 *
                 3.0005826889194818E+33) + t2 * t4 * t6 * in2[1] *
                1.382907539166694E+35) - in1[9] * in1[11] * t4 * t8 * t11 *
               4.0519190897584128E+33) - in1[9] * in1[11] * t4 * t9 * t11 *
              2.2956265150167119E+33) + in1[9] * in1[11] * t8 * t9 * t11 *
             5.808211664500115E+33) + in1[9] * in1[10] * t2 * t4 * t7 *
            2.2956265150167119E+33) - t6 * t8 * t9 * t11 * t12 *
           1.234871098261409E+34) - in1[9] * in1[10] * t2 * t4 * t7 * t8 *
          6.3475456047751256E+33) - in1[9] * in1[10] * t2 * t4 * t7 * t9 *
         6.3475456047751256E+33) - in1[11] * in1[10] * t2 * t4 * t6 * t7 *
        2.2956265150167119E+33) + in1[11] * in1[10] * t2 * t4 * t6 * t7 * t8 *
       2.2956265150167119E+33) + in1[11] * in1[10] * t2 * t4 * t6 * t7 * t9 *
      6.3475456047751256E+33) + in1[10] * in1[5] * t2 * t4 * t6 * t7 * t8 *
     4.0519190897584128E+33) * 1.8881429367570871E-36;
  dv0[59] = t17 * t20 * (((((((((((((((((((((((((((((((t7 * t8 * in2[1] *
    -1.8075799330840252E+35 - t7 * t9 * in2[1] * 3.1904874722507191E+35) + in1[9]
    * in1[10] * t6 * t8 * 3.0005826889194818E+33) + in1[9] * in1[10] * t6 * t9 *
    5.2962092039361935E+33) + in1[9] * in1[10] * t6 * t10 *
    2.2956265150167119E+33) - in1[9] * in1[10] * t6 * t14 *
    4.0519190897584128E+33) + in1[11] * in1[10] * t8 * t11 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t9 * t11 *
    5.2962092039361935E+33) - in1[11] * in1[10] * t10 * t11 *
    3.0005826889194818E+33) - in1[11] * in1[10] * t8 * t16 *
    3.0005826889194818E+33) - in1[11] * in1[10] * t9 * t16 *
    5.2962092039361935E+33) - in1[11] * in1[10] * t11 * t14 *
    1.46443374976308E+34) + in1[11] * in1[10] * t10 * t16 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t14 * t16 *
    1.46443374976308E+34) - in1[10] * in1[5] * t10 * t11 *
    5.2962092039361935E+33) + in1[10] * in1[5] * t10 * t16 *
    5.2962092039361935E+33) + t2 * t4 * t6 * in2[2] * 1.382907539166694E+35) -
    in1[9] * in1[10] * t6 * t8 * t9 * 1.7562925747417011E+33) - in1[11] * in1[10]
    * t8 * t9 * t11 * 1.359300109679187E+34) + in1[11] * in1[10] * t8 * t9 * t16
    * 1.359300109679187E+34) - in1[10] * in1[5] * t8 * t9 * t11 *
    9.3481282936946074E+33) + in1[10] * in1[5] * t8 * t9 * t16 *
    9.3481282936946074E+33) - t2 * t4 * t7 * t11 * t12 * 2.2956265150167119E+33)
    + t2 * t4 * t7 * t12 * t16 * 4.5912530300334239E+33) + t2 * t4 * t7 * t8 *
    t11 * t12 * 6.3475456047751256E+33) + t2 * t4 * t7 * t9 * t11 * t12 *
    6.3475456047751256E+33) - t2 * t4 * t7 * t8 * t12 * t16 *
    1.2695091209550251E+34) - t2 * t4 * t7 * t9 * t12 * t16 *
    1.2695091209550251E+34) + in1[9] * in1[11] * t2 * t4 * t6 * t7 *
    4.5912530300334239E+33) - in1[9] * in1[11] * t2 * t6 * t7 * t9 *
    3.5125851494834022E+33) + in1[9] * in1[11] * t2 * t4 * t6 * t7 * t8 *
    1.2695091209550251E+34) + in1[9] * in1[11] * t2 * t4 * t6 * t7 * t9 *
    1.6207676359033651E+34) * -1.8881429367570871E-36 + t6 * t20 * t22 *
    (((((((((((((((((((((((t8 * in2[3] * 1.8075799330840252E+35 + t9 * in2[3] *
    3.1904874722507191E+35) + t6 * t8 * in2[1] * 1.8075799330840252E+35) + t6 *
    t9 * in2[1] * 3.1904874722507191E+35) + in1[9] * in1[10] * t7 * t8 *
    3.0005826889194818E+33) + in1[9] * in1[10] * t7 * t9 *
                       5.2962092039361935E+33) + in1[9] * in1[10] * t7 * t10 *
                      2.2956265150167119E+33) - in1[9] * in1[10] * t7 * t14 *
                     4.0519190897584128E+33) + t2 * t4 * t7 * in2[2] *
                    1.382907539166694E+35) + in1[9] * in1[11] * t2 * t4 * t11 *
                   2.2956265150167119E+33) - in1[9] * in1[11] * t2 * t9 * t11 *
                  1.7562925747417011E+33) - in1[9] * in1[10] * t7 * t8 * t9 *
                 1.7562925747417011E+33) - in1[11] * in1[10] * t6 * t7 * t8 *
                3.0005826889194818E+33) - in1[11] * in1[10] * t6 * t7 * t9 *
               5.2962092039361935E+33) + in1[11] * in1[10] * t6 * t7 * t10 *
              3.0005826889194818E+33) + in1[11] * in1[10] * t6 * t7 * t14 *
             1.46443374976308E+34) + in1[10] * in1[5] * t6 * t7 * t10 *
            5.2962092039361935E+33) + t2 * t4 * t6 * t11 * t12 *
           2.2956265150167119E+33) + in1[10] * in1[5] * t6 * t7 * t8 * t9 *
          9.3481282936946074E+33) - t2 * t4 * t6 * t8 * t11 * t12 *
         6.3475456047751256E+33) - t2 * t4 * t6 * t9 * t11 * t12 *
        6.3475456047751256E+33) + in1[9] * in1[11] * t2 * t4 * t8 * t11 *
       6.3475456047751256E+33) + in1[9] * in1[11] * t2 * t4 * t9 * t11 *
      8.1038381795168267E+33) + in1[11] * in1[10] * t6 * t7 * t8 * t9 *
     1.359300109679187E+34) * 3.7762858735141741E-36;
  dv0[60] = 0.0;
  dv0[61] = 0.0;
  dv0[62] = 0.0;
  dv0[63] = 0.0;
  dv0[64] = 0.0;
  dv0[65] = 1.0;
  dv0[66] = in2[0] * (t3 * t4 - t2 * t5 * t6) * 0.37037037037037035;
  dv0[67] = in2[0] * (t4 * t5 + t2 * t3 * t6) * 0.37037037037037035;
  dv0[68] = 0.0;
  dv0[69] = t17 * t20 * (in1[10] * t7 * t10 * t16 * 5.2962092039361935E+33 +
    in1[10] * t7 * t8 * t9 * t16 * 9.3481282936946074E+33) *
    1.8881429367570871E-36;
  dv0[70] = in1[10] * t2 * t4 * t6 * t8 * t20 * 0.0076506024096385516;
  dv0[71] = t17 * t20 * (in1[10] * t6 * t7 * t10 * 5.2962092039361935E+33 + in1
    [10] * t6 * t7 * t8 * t9 * 9.3481282936946074E+33) * 1.8881429367570871E-36;
  dv0[72] = 0.01;
  dv0[73] = 0.0;
  dv0[74] = 0.0;
  dv0[75] = 0.0;
  dv0[76] = 0.0;
  dv0[77] = 0.0;
  dv0[78] = 0.99999965925925927;
  dv0[79] = 0.0;
  dv0[80] = 0.0;
  dv0[81] = 0.0;
  dv0[82] = 0.0;
  dv0[83] = 0.0;
  dv0[84] = 0.0;
  dv0[85] = 0.01;
  dv0[86] = 0.0;
  dv0[87] = 0.0;
  dv0[88] = 0.0;
  dv0[89] = 0.0;
  dv0[90] = 0.0;
  dv0[91] = 0.999999662962963;
  dv0[92] = 0.0;
  dv0[93] = 0.0;
  dv0[94] = 0.0;
  dv0[95] = 0.0;
  dv0[96] = 0.0;
  dv0[97] = 0.0;
  dv0[98] = 0.01;
  dv0[99] = 0.0;
  dv0[100] = 0.0;
  dv0[101] = 0.0;
  dv0[102] = 0.0;
  dv0[103] = 0.0;
  dv0[104] = 0.99999961851851848;
  dv0[105] = 0.0;
  dv0[106] = 0.0;
  dv0[107] = 0.0;
  dv0[108] = 0.0;
  dv0[109] = 0.0;
  dv0[110] = 0.0;
  dv0[111] = 0.01;
  dv0[112] = 0.0;
  dv0[113] = 0.0;
  dv0[114] = 0.0;
  dv0[115] = 0.0;
  dv0[116] = 0.0;
  dv0[117] = t17 * t20 * ((((((((t23 + t24) + in1[10] * t6 * t7 * t10 *
    2.2956265150167119E+33) - in1[10] * t6 * t7 * t14 * 4.0519190897584128E+33)
    + in1[11] * t2 * t4 * t6 * t11 * 2.2956265150167119E+33) - in1[11] * t2 * t6
    * t9 * t11 * 1.7562925747417011E+33) - in1[10] * t6 * t7 * t8 * t9 *
    1.7562925747417011E+33) + in1[11] * t2 * t4 * t6 * t8 * t11 *
    6.3475456047751256E+33) + in1[11] * t2 * t4 * t6 * t9 * t11 *
    8.1038381795168267E+33) * 1.8881429367570871E-36 + 1.0;
  dv0[118] = t20 * t21 * ((((((((in1[11] * t8 * t11 * 5.2962092039361935E+33 +
    in1[11] * t9 * t11 * 3.0005826889194818E+33) + in1[11] * t10 * t11 *
    4.0519190897584128E+33) - in1[11] * t4 * t8 * t11 * 4.0519190897584128E+33)
    - in1[11] * t4 * t9 * t11 * 2.2956265150167119E+33) + in1[11] * t8 * t9 *
    t11 * 5.808211664500115E+33) + in1[10] * t2 * t4 * t7 *
    2.2956265150167119E+33) - in1[10] * t2 * t4 * t7 * t8 *
    6.3475456047751256E+33) - in1[10] * t2 * t4 * t7 * t9 *
    6.3475456047751256E+33) * 1.8881429367570871E-36;
  dv0[119] = t17 * t20 * ((((((((in1[10] * t7 * t8 * 3.0005826889194818E+33 +
    in1[10] * t7 * t9 * 5.2962092039361935E+33) + in1[10] * t7 * t10 *
    2.2956265150167119E+33) - in1[10] * t7 * t14 * 4.0519190897584128E+33) +
    in1[11] * t2 * t4 * t11 * 2.2956265150167119E+33) - in1[11] * t2 * t9 * t11 *
    1.7562925747417011E+33) - in1[10] * t7 * t8 * t9 * 1.7562925747417011E+33) +
    in1[11] * t2 * t4 * t8 * t11 * 6.3475456047751256E+33) + in1[11] * t2 * t4 *
    t9 * t11 * 8.1038381795168267E+33) * 1.8881429367570871E-36;
  dv0[120] = 0.0;
  dv0[121] = 0.0;
  dv0[122] = 0.0;
  dv0[123] = 0.0;
  dv0[124] = 0.01;
  dv0[125] = 0.0;
  dv0[126] = 0.0;
  dv0[127] = 0.0;
  dv0[128] = 0.0;
  dv0[129] = t17 * t20 * (((((((((((((((((((((in1[9] * t6 * t7 * t8 *
    3.0005826889194818E+33 + in1[9] * t6 * t7 * t9 * 5.2962092039361935E+33) +
    in1[9] * t6 * t7 * t10 * 2.2956265150167119E+33) - in1[9] * t6 * t7 * t14 *
    4.0519190897584128E+33) + in1[11] * t7 * t10 * t11 * 5.2962092039361935E+33)
    - in1[11] * t7 * t8 * t16 * 3.0005826889194818E+33) - in1[11] * t7 * t9 *
    t16 * 5.2962092039361935E+33) + in1[11] * t7 * t11 * t14 *
    5.2962092039361935E+33) + in1[11] * t7 * t10 * t16 * 3.0005826889194818E+33)
    + in1[11] * t7 * t14 * t16 * 1.46443374976308E+34) + in1[5] * t7 * t10 * t16
    * 5.2962092039361935E+33) - in1[9] * t6 * t7 * t8 * t9 *
    1.7562925747417011E+33) + in1[11] * t7 * t8 * t9 * t11 *
    1.0592418407872389E+34) - in1[11] * t7 * t8 * t10 * t11 *
    4.0519190897584128E+33) - in1[11] * t7 * t9 * t10 * t11 *
    4.0519190897584128E+33) + in1[11] * t7 * t8 * t9 * t16 *
    1.359300109679187E+34) + in1[11] * t7 * t8 * t11 * t14 *
    4.0519190897584128E+33) + in1[11] * t7 * t9 * t11 * t14 *
    4.0519190897584128E+33) + in1[10] * t2 * t4 * t10 * t11 *
    8.1038381795168255E+33) + in1[10] * t2 * t4 * t11 * t14 *
    8.1038381795168255E+33) + in1[5] * t7 * t8 * t9 * t16 *
    9.3481282936946074E+33) + in1[10] * t2 * t4 * t8 * t9 * t11 *
    1.6207676359033651E+34) * 1.8881429367570871E-36;
  dv0[130] = t20 * t21 * ((((((in1[9] * t2 * t4 * t7 * 2.2956265150167119E+33 -
    in1[9] * t2 * t4 * t7 * t8 * 6.3475456047751256E+33) - in1[9] * t2 * t4 * t7
    * t9 * 6.3475456047751256E+33) - in1[11] * t2 * t4 * t6 * t7 *
    2.2956265150167119E+33) + in1[11] * t2 * t4 * t6 * t7 * t8 *
    2.2956265150167119E+33) + in1[11] * t2 * t4 * t6 * t7 * t9 *
    6.3475456047751256E+33) + in1[5] * t2 * t4 * t6 * t7 * t8 *
    4.0519190897584128E+33) * 1.8881429367570871E-36 + 1.0;
  dv0[131] = t17 * t20 * (((((((((((in1[9] * t7 * t8 * 3.0005826889194818E+33 +
    in1[9] * t7 * t9 * 5.2962092039361935E+33) + in1[9] * t7 * t10 *
    2.2956265150167119E+33) - in1[9] * t7 * t14 * 4.0519190897584128E+33) - in1
    [9] * t7 * t8 * t9 * 1.7562925747417011E+33) - in1[11] * t6 * t7 * t8 *
    3.0005826889194818E+33) - in1[11] * t6 * t7 * t9 * 5.2962092039361935E+33) +
    in1[11] * t6 * t7 * t10 * 3.0005826889194818E+33) + in1[11] * t6 * t7 * t14 *
    1.46443374976308E+34) + in1[5] * t6 * t7 * t10 * 5.2962092039361935E+33) +
    in1[11] * t6 * t7 * t8 * t9 * 1.359300109679187E+34) + in1[5] * t6 * t7 * t8
    * t9 * 9.3481282936946074E+33) * 1.8881429367570871E-36;
  dv0[132] = 0.0;
  dv0[133] = 0.0;
  dv0[134] = 0.0;
  dv0[135] = 0.0;
  dv0[136] = 0.0;
  dv0[137] = 0.01;
  dv0[138] = 0.0;
  dv0[139] = 0.0;
  dv0[140] = 0.0;
  dv0[141] = t17 * t20 * (((((((((((((((((((((in1[10] * t7 * t10 * t11 *
    5.2962092039361935E+33 - in1[10] * t7 * t8 * t16 * 3.0005826889194818E+33) -
    in1[10] * t7 * t9 * t16 * 5.2962092039361935E+33) + in1[10] * t7 * t11 * t14
    * 5.2962092039361935E+33) + in1[10] * t7 * t10 * t16 *
    3.0005826889194818E+33) + in1[10] * t7 * t14 * t16 * 1.46443374976308E+34) +
    in1[9] * t2 * t4 * t6 * t11 * 2.2956265150167119E+33) - in1[9] * t2 * t6 *
    t9 * t11 * 1.7562925747417011E+33) - in1[11] * t2 * t4 * t10 * t13 *
    8.1038381795168255E+33) + in1[11] * t2 * t4 * t11 * t16 *
    4.5912530300334239E+33) - in1[11] * t2 * t4 * t13 * t14 *
    8.1038381795168255E+33) + in1[10] * t7 * t8 * t9 * t11 *
    1.0592418407872389E+34) - in1[10] * t7 * t8 * t10 * t11 *
    4.0519190897584128E+33) - in1[10] * t7 * t9 * t10 * t11 *
    4.0519190897584128E+33) + in1[10] * t7 * t8 * t9 * t16 *
    1.359300109679187E+34) + in1[10] * t7 * t8 * t11 * t14 *
    4.0519190897584128E+33) + in1[10] * t7 * t9 * t11 * t14 *
    4.0519190897584128E+33) + in1[9] * t2 * t4 * t6 * t8 * t11 *
    6.3475456047751256E+33) + in1[9] * t2 * t4 * t6 * t9 * t11 *
    8.1038381795168267E+33) - in1[11] * t2 * t4 * t8 * t9 * t13 *
    1.6207676359033651E+34) - in1[11] * t2 * t4 * t8 * t11 * t16 *
    1.2695091209550251E+34) - in1[11] * t2 * t4 * t9 * t11 * t16 *
    1.2695091209550251E+34) * 1.8881429367570871E-36;
  dv0[142] = t20 * t21 * (((((((((((((in1[9] * t8 * t11 * 5.2962092039361935E+33
    + in1[9] * t9 * t11 * 3.0005826889194818E+33) + in1[9] * t10 * t11 *
    4.0519190897584128E+33) - in1[9] * t4 * t8 * t11 * 4.0519190897584128E+33) -
    in1[9] * t4 * t9 * t11 * 2.2956265150167119E+33) + in1[9] * t8 * t9 * t11 *
    5.808211664500115E+33) + in1[11] * t6 * t8 * t11 * 1.0592418407872389E+34) +
    in1[11] * t6 * t9 * t11 * 6.0011653778389637E+33) - in1[11] * t6 * t10 * t11
    * 1.869625658738921E+34) - in1[11] * t6 * t11 * t14 * 6.0011653778389637E+33)
    - in1[11] * t6 * t8 * t9 * t11 * 2.4697421965228181E+34) - in1[10] * t2 * t4
    * t6 * t7 * 2.2956265150167119E+33) + in1[10] * t2 * t4 * t6 * t7 * t8 *
    2.2956265150167119E+33) + in1[10] * t2 * t4 * t6 * t7 * t9 *
    6.3475456047751256E+33) * 1.8881429367570871E-36;
  dv0[143] = t17 * t20 * (((((((((((-t23 - t24) + in1[9] * t2 * t4 * t11 *
    2.2956265150167119E+33) - in1[9] * t2 * t9 * t11 * 1.7562925747417011E+33) +
    in1[10] * t6 * t7 * t10 * 3.0005826889194818E+33) + in1[10] * t6 * t7 * t14 *
    1.46443374976308E+34) + in1[9] * t2 * t4 * t8 * t11 * 6.3475456047751256E+33)
    + in1[9] * t2 * t4 * t9 * t11 * 8.1038381795168267E+33) + in1[11] * t2 * t4 *
    t6 * t11 * 4.5912530300334239E+33) + in1[10] * t6 * t7 * t8 * t9 *
    1.359300109679187E+34) - in1[11] * t2 * t4 * t6 * t8 * t11 *
    1.2695091209550251E+34) - in1[11] * t2 * t4 * t6 * t9 * t11 *
    1.2695091209550251E+34) * 1.8881429367570871E-36 + 1.0;
  for (i1 = 0; i1 < 12; i1++) {
    memcpy(&A[i1 * 12], &dv0[i1 * 12], 12U * sizeof(real_T));
  }
}

/* End of code generation (compute_A.cpp) */
