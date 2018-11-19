@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=test_f_mex
set MEX_NAME=test_f_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for test_f > test_f_mex.mki
echo COMPILER=%COMPILER%>> test_f_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> test_f_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> test_f_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> test_f_mex.mki
echo LINKER=%LINKER%>> test_f_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> test_f_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> test_f_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> test_f_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> test_f_mex.mki
echo OMPFLAGS= >> test_f_mex.mki
echo OMPLINKFLAGS= >> test_f_mex.mki
echo EMC_COMPILER=msvcpp140>> test_f_mex.mki
echo EMC_CONFIG=optim>> test_f_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f test_f_mex.mk
