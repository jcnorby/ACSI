@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=computeSLQTraj_mex
set MEX_NAME=computeSLQTraj_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for computeSLQTraj > computeSLQTraj_mex.mki
echo COMPILER=%COMPILER%>> computeSLQTraj_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> computeSLQTraj_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> computeSLQTraj_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> computeSLQTraj_mex.mki
echo LINKER=%LINKER%>> computeSLQTraj_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> computeSLQTraj_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> computeSLQTraj_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> computeSLQTraj_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> computeSLQTraj_mex.mki
echo OMPFLAGS= >> computeSLQTraj_mex.mki
echo OMPLINKFLAGS= >> computeSLQTraj_mex.mki
echo EMC_COMPILER=msvcpp140>> computeSLQTraj_mex.mki
echo EMC_CONFIG=optim>> computeSLQTraj_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f computeSLQTraj_mex.mk
