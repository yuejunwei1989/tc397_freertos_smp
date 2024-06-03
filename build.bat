set NUMBER_OF_PROCESSORS=8
if not exist build mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain_tricore_tasking.cmake -G "MinGW Makefiles" ..
mingw32-make.exe clean
mingw32-make.exe -j%NUMBER_OF_PROCESSORS% VERBOSE=1
cd ..