mkcir build
cd build
cmake ../opencv_linking -G "Visual Studio 16 2019" -DCMAKE_INSTALL_PREFIX=c:/temp//testbuildrelease
msbuild INSTALL.vcxproj /p:configuration=release

rem
rem
rem https://blog.naver.com/lifeisforu/222862527688
rem make build
REM 순서대로 / 소스 지정(CMAKELIST 폴더)  / BUILD 생성 폴더 지정 / GENERATOR(프로젝트 생성) / 플랫폼 / INSTALL 디렉토리 지정
 
cmake -S ../opencv_linking -B ./testbuild -G "Visual Studio 16 2019" -A x64 -DCMAKE_INSTALL_PREFIX=./testabc

cmake --build ./testbuild --config Release

cmake --install ./testbuild --config Release