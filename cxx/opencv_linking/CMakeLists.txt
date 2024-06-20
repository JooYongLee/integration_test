cmake_minimum_required(VERSION 3.11)

project(testmy
)

add_executable(opencv_test_cmake 
	opencv_test.cpp
	)
	
include_directories(
# PRIVATE
	C:/works/library/opencv/build/include 
)


# https://stackoverflow.com/questions/1005901/how-to-set-path-environment-variable-using-cmake-and-visual-studio-to-run-test
# How to Set Path Environment Variable using CMake and Visual Studio to Run Test

set(MY_PATH "PATH=%PATH%" "C:/works/library/opencv/build/x64/vc14/bin")
set_target_properties(opencv_test_cmake PROPERTIES VS_DEBUGGER_ENVIRONMENT "${MY_PATH}")

target_link_directories(
opencv_test_cmake 
PUBLIC C:/works/library/opencv/build/x64/vc14/lib
)
# target_link_directories
target_link_libraries(opencv_test_cmake
opencv_world460
	
)

# add_library, add_executable에 사용했던 이름
# 빌드 결과물을 설치
install(TARGETS         opencv_test_cmake  
        DESTINATION     ${CMAKE_INSTALL_PREFIX}/bin
)