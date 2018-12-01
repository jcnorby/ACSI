@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=computeSLQTrajHoop_mex
set MEX_NAME=computeSLQTrajHoop_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for computeSLQTrajHoop > computeSLQTrajHoop_mex.mki
echo COMPILER=%COMPILER%>> computeSLQTrajHoop_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> computeSLQTrajHoop_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> computeSLQTrajHoop_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> computeSLQTrajHoop_mex.mki
echo LINKER=%LINKER%>> computeSLQTrajHoop_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> computeSLQTrajHoop_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> computeSLQTrajHoop_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> computeSLQTrajHoop_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> computeSLQTrajHoop_mex.mki
echo OMPFLAGS= >> computeSLQTrajHoop_mex.mki
echo OMPLINKFLAGS= >> computeSLQTrajHoop_mex.mki
echo EMC_COMPILER=msvcpp140>> computeSLQTrajHoop_mex.mki
echo EMC_CONFIG=optim>> computeSLQTrajHoop_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f computeSLQTrajHoop_mex.mk
