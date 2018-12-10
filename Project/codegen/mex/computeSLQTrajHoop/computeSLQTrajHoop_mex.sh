MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/instructor/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for computeSLQTrajHoop" > computeSLQTrajHoop_mex.mki
echo "CC=$CC" >> computeSLQTrajHoop_mex.mki
echo "CFLAGS=$CFLAGS" >> computeSLQTrajHoop_mex.mki
echo "CLIBS=$CLIBS" >> computeSLQTrajHoop_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> computeSLQTrajHoop_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> computeSLQTrajHoop_mex.mki
echo "CXX=$CXX" >> computeSLQTrajHoop_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> computeSLQTrajHoop_mex.mki
echo "CXXLIBS=$CXXLIBS" >> computeSLQTrajHoop_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> computeSLQTrajHoop_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> computeSLQTrajHoop_mex.mki
echo "LDFLAGS=$LDFLAGS" >> computeSLQTrajHoop_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> computeSLQTrajHoop_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> computeSLQTrajHoop_mex.mki
echo "Arch=$Arch" >> computeSLQTrajHoop_mex.mki
echo "LD=$LDXX" >> computeSLQTrajHoop_mex.mki
echo OMPFLAGS= >> computeSLQTrajHoop_mex.mki
echo OMPLINKFLAGS= >> computeSLQTrajHoop_mex.mki
echo "EMC_COMPILER=gcc" >> computeSLQTrajHoop_mex.mki
echo "EMC_CONFIG=optim" >> computeSLQTrajHoop_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f computeSLQTrajHoop_mex.mk
