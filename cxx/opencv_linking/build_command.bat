mkcir build
cd build
cmake ../opencv_linking -G "Visual Studio 16 2019" -DCMAKE_INSTALL_PREFIX=c:/temp//testbuildrelease
msbuild INSTALL.vcxproj /p:configuration=release