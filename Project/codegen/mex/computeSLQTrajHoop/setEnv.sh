CC="gcc"
                CXX="/usr/bin/g++"
                CFLAGS="-fexceptions -fPIC -fno-omit-frame-pointer -pthread -D_GNU_SOURCE -DMATLAB_MEX_FILE "
                CXXFLAGS="-fexceptions -fPIC -fno-omit-frame-pointer -pthread -std=c++11 -D_GNU_SOURCE -DMATLAB_MEX_FILE "
                COPTIMFLAGS="-O2 -fwrapv -DNDEBUG"
                CXXOPTIMFLAGS="-O2 -fwrapv -DNDEBUG"
                CDEBUGFLAGS="-g"
                CXXDEBUGFLAGS="-g"
                LD="gcc"
                LDXX="/usr/bin/g++"
                LDFLAGS="-pthread -Wl,--no-undefined  -shared -Wl,--as-needed -Wl,-rpath-link,/usr/local/MATLAB/R2018b/bin/glnxa64 -L"/usr/local/MATLAB/R2018b/bin/glnxa64" -Wl,-rpath-link,/usr/local/MATLAB/R2018b/extern/bin/glnxa64 -L"/usr/local/MATLAB/R2018b/extern/bin/glnxa64" -lMatlabDataArray -lmx -lmex -lmat -lm -lstdc++ -Wl,--version-script,"/usr/local/MATLAB/R2018b/extern/lib/glnxa64/mexFunction.map""
                LDDEBUGFLAGS="-g"
set INCLUDE=/usr/lib/gcc/x86_64-linux-gnu/5.4.0/include;/usr/include/c++/5.4.0;/usr/include/c++/5.4.0/x86_64-linux-gnu;/usr/include/c++/5.4.0/backward;%INCLUDE%
