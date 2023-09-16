mkdir mybuild
cd mybuild 
cmake .. -G "Visual Studio 16 2019" -DCMAKE_INSTALL_PREFIX=c:/mytest
REM msbuild 
REM 솔루션을 build하든 all_build.vcxproj 빌드하든 둘다 된다?
MSBuild Project.sln /p:Configuration=Release /p:Platform=x64
MSBuild ALL_BUILD.vcxproj /p:Configuration=Release /p:Platform=x64
MSBuild Install.vcxproj
