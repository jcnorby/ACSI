//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 26-Nov-2018 17:44:12
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "computeSLQTraj.h"
#include "main.h"
#include "computeSLQTraj_terminate.h"
#include "computeSLQTraj_emxAPI.h"
#include "computeSLQTraj_initialize.h"

// Function Declarations
static void argInit_12x1_real_T(double result[12]);
static void argInit_12x301_real_T(double result[3612]);
static double argInit_real_T();
static void main_computeSLQTraj();

// Function Definitions

//
// Arguments    : double result[12]
// Return Type  : void
//
static void argInit_12x1_real_T(double result[12])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 12; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

//
// Arguments    : double result[3612]
// Return Type  : void
//
static void argInit_12x301_real_T(double result[3612])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 12; idx0++) {
    for (idx1 = 0; idx1 < 301; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 12 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_computeSLQTraj()
{
  emxArray_real_T *x;
  emxArray_real_T *K;
  emxArray_real_T *u;
  double dv1[12];
  double dv2[12];
  double dv3[3612];
  emxInitArray_real_T(&x, 2);
  emxInitArray_real_T(&K, 3);
  emxInitArray_real_T(&u, 2);

  // Initialize function 'computeSLQTraj' input arguments.
  // Initialize function input argument 'x0'.
  // Initialize function input argument 'xf'.
  // Initialize function input argument 'x_wp'.
  // Call the entry-point 'computeSLQTraj'.
  argInit_12x1_real_T(dv1);
  argInit_12x1_real_T(dv2);
  argInit_12x301_real_T(dv3);
  computeSLQTraj(argInit_real_T(), argInit_real_T(), dv1, dv2, argInit_real_T(),
                 dv3, x, K, u);
  emxDestroyArray_real_T(u);
  emxDestroyArray_real_T(K);
  emxDestroyArray_real_T(x);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  computeSLQTraj_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_computeSLQTraj();

  // Terminate the application.
  // You do not need to do this more than one time.
  computeSLQTraj_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
