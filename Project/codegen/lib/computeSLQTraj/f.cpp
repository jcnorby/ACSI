//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: f.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

// Include Files
#include <cmath>
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "f.h"

// Function Definitions

//
// dq = dynamics(q,u);
// Arguments    : const double q[12]
//                const double u[4]
//                double T
//                double qnew[12]
// Return Type  : void
//
void f(const double q[12], const double u[4], double T, double qnew[12])
{
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t12;
  double t13;
  double t14;
  double t15;
  double t16;
  double t19;
  double t20;
  double d0;
  double d1;
  double d2;
  double d3;
  double d4;

  // GETDYNSYS
  //     DSTATES = GETDYNSYS(IN1,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 8.1.
  //     13-Nov-2018 11:05:04
  t2 = std::cos(q[5]);
  t3 = std::sin(q[3]);
  t4 = std::cos(q[3]);
  t5 = std::sin(q[5]);
  t6 = std::sin(q[4]);
  t7 = std::cos(q[4]);
  t8 = t4 * t4;
  t9 = t3 * t3;
  t10 = t8 * t8;
  t11 = t7 * t7;
  t12 = t9 * t9;
  t13 = t6 * t6;
  t14 = q[11] * q[11];
  t15 = t11 * t11;
  t16 = q[10] * q[10];
  t19 = 1.0 / ((t10 + t12) + t8 * t9 * 2.0);
  t20 = 1.0 / (t7 * t7);
  qnew[0] = q[0] + q[6] * T;
  qnew[1] = q[1] + q[7] * T;
  qnew[2] = q[2] + q[8] * T;
  qnew[3] = q[3] + q[9] * T;
  qnew[4] = q[4] + q[10] * T;
  qnew[5] = q[5] + q[11] * T;
  qnew[6] = q[6] + (q[6] * -3.4074074074074083E-5 + u[0] * (t3 * t5 + t2 * t4 *
    t6) * 37.037037037037038) * T;
  qnew[7] = q[7] + (q[7] * -3.3703703703703713E-5 - u[0] * (t2 * t3 - t4 * t5 *
    t6) * 37.037037037037038) * T;
  qnew[8] = q[8] + ((q[8] * -3.8148148148148163E-5 + u[0] * t4 * t7 *
                     37.037037037037038) - 9.81) * T;
  t2 = t8 * t13;
  t5 = u[1];
  d0 = t10 * t11;
  d1 = u[1];
  d2 = t9 * t13;
  d3 = q[9];
  d4 = q[10];
  qnew[9] = q[9] + t19 * t20 * (((((((((((((((((((((((((((((((((((((((t2 * t5 *
    1.8075799330840252E+35 + d0 * d1 * 3.1904874722507191E+35) + d2 * u[1] *
    3.1904874722507191E+35) + t11 * t12 * u[1] * 3.1904874722507191E+35) + t6 *
    t8 * u[3] * 1.8075799330840252E+35) + t6 * t9 * u[3] *
    3.1904874722507191E+35) + t8 * t9 * t11 * u[1] * 6.3809749445014382E+35) +
    d3 * d4 * t6 * t7 * t8 * 3.0005826889194818E+33) + q[9] * q[10] * t6 * t7 *
    t9 * 5.2962092039361935E+33) + q[9] * q[10] * t6 * t7 * t10 *
    2.2956265150167119E+33) - q[9] * q[10] * t6 * t7 * t12 *
    4.0519190897584128E+33) - q[11] * q[10] * t7 * t8 * t13 *
    3.0005826889194818E+33) + q[11] * q[10] * t7 * t10 * t11 *
    5.2962092039361935E+33) - q[11] * q[10] * t7 * t9 * t13 *
    5.2962092039361935E+33) + q[11] * q[10] * t7 * t10 * t13 *
    3.0005826889194818E+33) + q[11] * q[10] * t7 * t11 * t12 *
    5.2962092039361935E+33) + q[11] * q[10] * t7 * t12 * t13 *
    1.46443374976308E+34) + q[10] * q[5] * t7 * t10 * t13 *
    5.2962092039361935E+33) + t3 * t4 * t10 * t11 * t16 * 4.0519190897584128E+33)
    + t3 * t4 * t11 * t13 * t14 * 2.2956265150167119E+33) - t3 * t4 * t10 * t14 *
    t15 * 4.0519190897584128E+33) + t3 * t4 * t11 * t12 * t16 *
    4.0519190897584128E+33) - t3 * t4 * t12 * t14 * t15 * 4.0519190897584128E+33)
    + t3 * t4 * t6 * t7 * u[2] * 1.382907539166694E+35) + q[10] * q[5] * t7 * t8
    * t9 * t13 * 9.3481282936946074E+33) + t3 * t4 * t8 * t9 * t11 * t16 *
    8.1038381795168267E+33) - t3 * t4 * t8 * t9 * t14 * t15 *
    8.1038381795168267E+33) - t3 * t4 * t8 * t11 * t13 * t14 *
    6.3475456047751256E+33) - t3 * t4 * t9 * t11 * t13 * t14 *
    6.3475456047751256E+33) + q[9] * q[11] * t3 * t4 * t6 * t11 *
    2.2956265150167119E+33) - q[9] * q[11] * t4 * t6 * t9 * t11 *
    1.7562925747417011E+33) - q[9] * q[10] * t6 * t7 * t8 * t9 *
    1.7562925747417011E+33) + q[11] * q[10] * t7 * t8 * t9 * t11 *
    1.0592418407872389E+34) - q[11] * q[10] * t7 * t8 * t10 * t11 *
    4.0519190897584128E+33) + q[11] * q[10] * t7 * t8 * t9 * t13 *
    1.359300109679187E+34) - q[11] * q[10] * t7 * t9 * t10 * t11 *
    4.0519190897584128E+33) + q[11] * q[10] * t7 * t8 * t11 * t12 *
    4.0519190897584128E+33) + q[11] * q[10] * t7 * t9 * t11 * t12 *
    4.0519190897584128E+33) + q[9] * q[11] * t3 * t4 * t6 * t8 * t11 *
    6.3475456047751256E+33) + q[9] * q[11] * t3 * t4 * t6 * t9 * t11 *
    8.1038381795168267E+33) * 1.888142936757087E-34 * T;
  qnew[10] = q[10] + t19 * (((((((((((((((((((((t3 * t4 * u[3] *
    1.382907539166694E+35 + t7 * t8 * u[2] * 3.1904874722507191E+35) + t7 * t9 *
    u[2] * 1.8075799330840252E+35) + q[9] * q[11] * t8 * t11 *
    5.2962092039361935E+33) + q[9] * q[11] * t9 * t11 * 3.0005826889194818E+33)
    + q[9] * q[11] * t10 * t11 * 4.0519190897584128E+33) + t6 * t8 * t11 * t14 *
    5.2962092039361935E+33) + t6 * t9 * t11 * t14 * 3.0005826889194818E+33) - t6
    * t10 * t11 * t14 * 9.3481282936946074E+33) - t6 * t11 * t12 * t14 *
    3.0005826889194818E+33) + t3 * t4 * t6 * u[1] * 1.382907539166694E+35) - q[9]
    * q[11] * t3 * t8 * t11 * 4.0519190897584128E+33) - q[9] * q[11] * t3 * t9 *
    t11 * 2.2956265150167119E+33) + q[9] * q[11] * t8 * t9 * t11 *
    5.808211664500115E+33) + q[9] * q[10] * t3 * t4 * t7 *
    2.2956265150167119E+33) - t6 * t8 * t9 * t11 * t14 * 1.234871098261409E+34)
    - q[9] * q[10] * t3 * t4 * t7 * t8 * 6.3475456047751256E+33) - q[9] * q[10] *
    t3 * t4 * t7 * t9 * 6.3475456047751256E+33) - q[11] * q[10] * t3 * t4 * t6 *
    t7 * 2.2956265150167119E+33) + q[11] * q[10] * t3 * t4 * t6 * t7 * t8 *
    2.2956265150167119E+33) + q[11] * q[10] * t3 * t4 * t6 * t7 * t9 *
    6.3475456047751256E+33) + q[10] * q[5] * t3 * t4 * t6 * t7 * t8 *
    4.0519190897584128E+33) * 1.888142936757087E-34 / t7 * T;
  qnew[11] = q[11] + t19 * t20 * (((((((((((((((((((((((t8 * u[3] *
    1.8075799330840252E+35 + t9 * u[3] * 3.1904874722507191E+35) + t6 * t8 * u[1]
    * 1.8075799330840252E+35) + t6 * t9 * u[1] * 3.1904874722507191E+35) + q[9] *
    q[10] * t7 * t8 * 3.0005826889194818E+33) + q[9] * q[10] * t7 * t9 *
    5.2962092039361935E+33) + q[9] * q[10] * t7 * t10 * 2.2956265150167119E+33)
    - q[9] * q[10] * t7 * t12 * 4.0519190897584128E+33) + t3 * t4 * t7 * u[2] *
    1.382907539166694E+35) + q[9] * q[11] * t3 * t4 * t11 *
    2.2956265150167119E+33) - q[9] * q[11] * t4 * t9 * t11 *
    1.7562925747417011E+33) - q[9] * q[10] * t7 * t8 * t9 *
    1.7562925747417011E+33) - q[11] * q[10] * t6 * t7 * t8 *
    3.0005826889194818E+33) - q[11] * q[10] * t6 * t7 * t9 *
    5.2962092039361935E+33) + q[11] * q[10] * t6 * t7 * t10 *
    3.0005826889194818E+33) + q[11] * q[10] * t6 * t7 * t12 *
    1.46443374976308E+34) + q[10] * q[5] * t6 * t7 * t10 *
    5.2962092039361935E+33) + t3 * t4 * t6 * t11 * t14 * 2.2956265150167119E+33)
    + q[10] * q[5] * t6 * t7 * t8 * t9 * 9.3481282936946074E+33) - t3 * t4 * t6 *
    t8 * t11 * t14 * 6.3475456047751256E+33) - t3 * t4 * t6 * t9 * t11 * t14 *
    6.3475456047751256E+33) + q[9] * q[11] * t3 * t4 * t8 * t11 *
    6.3475456047751256E+33) + q[9] * q[11] * t3 * t4 * t9 * t11 *
    8.1038381795168267E+33) + q[11] * q[10] * t6 * t7 * t8 * t9 *
    1.359300109679187E+34) * 1.888142936757087E-34 * T;
}

//
// File trailer for f.cpp
//
// [EOF]
//
