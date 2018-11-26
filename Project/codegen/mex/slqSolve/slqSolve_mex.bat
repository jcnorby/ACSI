@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=slqSolve_mex
set MEX_NAME=slqSolve_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for slqSolve > slqSolve_mex.mki
echo COMPILER=%COMPILER%>> slqSolve_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> slqSolve_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> slqSolve_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> slqSolve_mex.mki
echo LINKER=%LINKER%>> slqSolve_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> slqSolve_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> slqSolve_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> slqSolve_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> slqSolve_mex.mki
echo OMPFLAGS= >> slqSolve_mex.mki
echo OMPLINKFLAGS= >> slqSolve_mex.mki
echo EMC_COMPILER=msvcpp140>> slqSolve_mex.mki
echo EMC_CONFIG=optim>> slqSolve_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f slqSolve_mex.mk
