/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getDynSys.cpp
 *
 * Code generation for function 'getDynSys'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "getDynSys.h"

/* Function Definitions */
void getDynSys(const real_T in1[12], const real_T in2[4], real_T dstates[12])
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
  real_T t19;
  real_T t20;

  /* GETDYNSYS */
  /*     DSTATES = GETDYNSYS(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.1. */
  /*     13-Nov-2018 11:05:04 */
  t2 = muDoubleScalarCos(in1[5]);
  t3 = muDoubleScalarSin(in1[3]);
  t4 = muDoubleScalarCos(in1[3]);
  t5 = muDoubleScalarSin(in1[5]);
  t6 = muDoubleScalarSin(in1[4]);
  t7 = muDoubleScalarCos(in1[4]);
  t8 = t4 * t4;
  t9 = t3 * t3;
  t10 = t8 * t8;
  t11 = t7 * t7;
  t12 = t9 * t9;
  t13 = t6 * t6;
  t14 = in1[11] * in1[11];
  t15 = t11 * t11;
  t16 = in1[10] * in1[10];
  t19 = 1.0 / ((t10 + t12) + t8 * t9 * 2.0);
  t20 = 1.0 / (t7 * t7);
  dstates[0] = in1[6];
  dstates[1] = in1[7];
  dstates[2] = in1[8];
  dstates[3] = in1[9];
  dstates[4] = in1[10];
  dstates[5] = in1[11];
  dstates[6] = in1[6] * -3.4074074074074083E-5 + in2[0] * (t3 * t5 + t2 * t4 *
    t6) * 37.037037037037038;
  dstates[7] = in1[7] * -3.3703703703703713E-5 - in2[0] * (t2 * t3 - t4 * t5 *
    t6) * 37.037037037037038;
  dstates[8] = (in1[8] * -3.8148148148148163E-5 + in2[0] * t4 * t7 *
                37.037037037037038) - 9.81;
  dstates[9] = t19 * t20 * (((((((((((((((((((((((((((((((((((((((t8 * t13 *
    in2[1] * 1.8075799330840252E+35 + t10 * t11 * in2[1] *
    3.1904874722507191E+35) + t9 * t13 * in2[1] * 3.1904874722507191E+35) + t11 *
    t12 * in2[1] * 3.1904874722507191E+35) + t6 * t8 * in2[3] *
    1.8075799330840252E+35) + t6 * t9 * in2[3] * 3.1904874722507191E+35) + t8 *
    t9 * t11 * in2[1] * 6.3809749445014382E+35) + in1[9] * in1[10] * t6 * t7 *
    t8 * 3.0005826889194818E+33) + in1[9] * in1[10] * t6 * t7 * t9 *
    5.2962092039361935E+33) + in1[9] * in1[10] * t6 * t7 * t10 *
    2.2956265150167119E+33) - in1[9] * in1[10] * t6 * t7 * t12 *
    4.0519190897584128E+33) - in1[11] * in1[10] * t7 * t8 * t13 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t7 * t10 * t11 *
    5.2962092039361935E+33) - in1[11] * in1[10] * t7 * t9 * t13 *
    5.2962092039361935E+33) + in1[11] * in1[10] * t7 * t10 * t13 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t7 * t11 * t12 *
    5.2962092039361935E+33) + in1[11] * in1[10] * t7 * t12 * t13 *
    1.46443374976308E+34) + in1[10] * in1[5] * t7 * t10 * t13 *
    5.2962092039361935E+33) + t3 * t4 * t10 * t11 * t16 * 4.0519190897584128E+33)
    + t3 * t4 * t11 * t13 * t14 * 2.2956265150167119E+33) - t3 * t4 * t10 * t14 *
    t15 * 4.0519190897584128E+33) + t3 * t4 * t11 * t12 * t16 *
    4.0519190897584128E+33) - t3 * t4 * t12 * t14 * t15 * 4.0519190897584128E+33)
    + t3 * t4 * t6 * t7 * in2[2] * 1.382907539166694E+35) + in1[10] * in1[5] *
    t7 * t8 * t9 * t13 * 9.3481282936946074E+33) + t3 * t4 * t8 * t9 * t11 * t16
    * 8.1038381795168267E+33) - t3 * t4 * t8 * t9 * t14 * t15 *
    8.1038381795168267E+33) - t3 * t4 * t8 * t11 * t13 * t14 *
    6.3475456047751256E+33) - t3 * t4 * t9 * t11 * t13 * t14 *
    6.3475456047751256E+33) + in1[9] * in1[11] * t3 * t4 * t6 * t11 *
    2.2956265150167119E+33) - in1[9] * in1[11] * t4 * t6 * t9 * t11 *
    1.7562925747417011E+33) - in1[9] * in1[10] * t6 * t7 * t8 * t9 *
    1.7562925747417011E+33) + in1[11] * in1[10] * t7 * t8 * t9 * t11 *
    1.0592418407872389E+34) - in1[11] * in1[10] * t7 * t8 * t10 * t11 *
    4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t8 * t9 * t13 *
    1.359300109679187E+34) - in1[11] * in1[10] * t7 * t9 * t10 * t11 *
    4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t8 * t11 * t12 *
    4.0519190897584128E+33) + in1[11] * in1[10] * t7 * t9 * t11 * t12 *
    4.0519190897584128E+33) + in1[9] * in1[11] * t3 * t4 * t6 * t8 * t11 *
    6.3475456047751256E+33) + in1[9] * in1[11] * t3 * t4 * t6 * t9 * t11 *
    8.1038381795168267E+33) * 1.888142936757087E-34;
  dstates[10] = t19 * (((((((((((((((((((((t3 * t4 * in2[3] *
    1.382907539166694E+35 + t7 * t8 * in2[2] * 3.1904874722507191E+35) + t7 * t9
    * in2[2] * 1.8075799330840252E+35) + in1[9] * in1[11] * t8 * t11 *
    5.2962092039361935E+33) + in1[9] * in1[11] * t9 * t11 *
    3.0005826889194818E+33) + in1[9] * in1[11] * t10 * t11 *
    4.0519190897584128E+33) + t6 * t8 * t11 * t14 * 5.2962092039361935E+33) + t6
    * t9 * t11 * t14 * 3.0005826889194818E+33) - t6 * t10 * t11 * t14 *
    9.3481282936946074E+33) - t6 * t11 * t12 * t14 * 3.0005826889194818E+33) +
    t3 * t4 * t6 * in2[1] * 1.382907539166694E+35) - in1[9] * in1[11] * t3 * t8 *
    t11 * 4.0519190897584128E+33) - in1[9] * in1[11] * t3 * t9 * t11 *
    2.2956265150167119E+33) + in1[9] * in1[11] * t8 * t9 * t11 *
    5.808211664500115E+33) + in1[9] * in1[10] * t3 * t4 * t7 *
    2.2956265150167119E+33) - t6 * t8 * t9 * t11 * t14 * 1.234871098261409E+34)
    - in1[9] * in1[10] * t3 * t4 * t7 * t8 * 6.3475456047751256E+33) - in1[9] *
    in1[10] * t3 * t4 * t7 * t9 * 6.3475456047751256E+33) - in1[11] * in1[10] *
    t3 * t4 * t6 * t7 * 2.2956265150167119E+33) + in1[11] * in1[10] * t3 * t4 *
    t6 * t7 * t8 * 2.2956265150167119E+33) + in1[11] * in1[10] * t3 * t4 * t6 *
                        t7 * t9 * 6.3475456047751256E+33) + in1[10] * in1[5] *
                       t3 * t4 * t6 * t7 * t8 * 4.0519190897584128E+33) *
    1.888142936757087E-34 / t7;
  dstates[11] = t19 * t20 * (((((((((((((((((((((((t8 * in2[3] *
    1.8075799330840252E+35 + t9 * in2[3] * 3.1904874722507191E+35) + t6 * t8 *
    in2[1] * 1.8075799330840252E+35) + t6 * t9 * in2[1] * 3.1904874722507191E+35)
    + in1[9] * in1[10] * t7 * t8 * 3.0005826889194818E+33) + in1[9] * in1[10] *
    t7 * t9 * 5.2962092039361935E+33) + in1[9] * in1[10] * t7 * t10 *
    2.2956265150167119E+33) - in1[9] * in1[10] * t7 * t12 *
    4.0519190897584128E+33) + t3 * t4 * t7 * in2[2] * 1.382907539166694E+35) +
    in1[9] * in1[11] * t3 * t4 * t11 * 2.2956265150167119E+33) - in1[9] * in1[11]
    * t4 * t9 * t11 * 1.7562925747417011E+33) - in1[9] * in1[10] * t7 * t8 * t9 *
    1.7562925747417011E+33) - in1[11] * in1[10] * t6 * t7 * t8 *
    3.0005826889194818E+33) - in1[11] * in1[10] * t6 * t7 * t9 *
    5.2962092039361935E+33) + in1[11] * in1[10] * t6 * t7 * t10 *
    3.0005826889194818E+33) + in1[11] * in1[10] * t6 * t7 * t12 *
    1.46443374976308E+34) + in1[10] * in1[5] * t6 * t7 * t10 *
    5.2962092039361935E+33) + t3 * t4 * t6 * t11 * t14 * 2.2956265150167119E+33)
    + in1[10] * in1[5] * t6 * t7 * t8 * t9 * 9.3481282936946074E+33) - t3 * t4 *
    t6 * t8 * t11 * t14 * 6.3475456047751256E+33) - t3 * t4 * t6 * t9 * t11 *
    t14 * 6.3475456047751256E+33) + in1[9] * in1[11] * t3 * t4 * t8 * t11 *
    6.3475456047751256E+33) + in1[9] * in1[11] * t3 * t4 * t9 * t11 *
    8.1038381795168267E+33) + in1[11] * in1[10] * t6 * t7 * t8 * t9 *
    1.359300109679187E+34) * 1.888142936757087E-34;
}

/* End of code generation (getDynSys.cpp) */
