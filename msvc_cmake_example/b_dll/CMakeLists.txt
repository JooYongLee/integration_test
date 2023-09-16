cmake_minimum_required(VERSION 3.11)

add_library(b_dll SHARED
	dllmain.cpp
	b_dll.cpp
)

message(STATUS "this is b_dll")                     # -- CMAKE_BUILD_TYPE
# message(STATUS ${CMAKE_BUILD_TYPE})                  # -- Debug
# message(STATUS "Configuration: ${CMAKE_BUILD_TYPE}") # -- Configuration: Debug
# message(STATUS "yosi")
# message(STATUS ${CMAKE_SOURCE_DIR})         # -- Root
# message(STATUS ${CMAKE_CURRENT_SOURCE_DIR}) # -- Root
# message(STATUS ${CMAKE_INSTALL_PREFIX}) # -- Root
message(STATUS "this b cmake")



add_subdirectory(../a_dll
./build_a_dll # 빌드 결과물을 지정
)

target_include_directories(b_dll
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/../a_dll/include
	
)

add_dependencies(b_dll a_dll)
target_link_libraries(b_dll
PRIVATE
	a_dll
)


if(MSVC)
	target_compile_definitions(b_dll
	PRIVATE
		BDLL_EXPORTS
	)
endif()

install(DIRECTORY       ${CMAKE_SOURCE_DIR}/include
        DESTINATION     ${CMAKE_INSTALL_PREFIX}/install
)
# 빌드 결과물을 설치
install(TARGETS         b_dll  # add_library, add_executable에 사용했던 이름
        DESTINATION     ${CMAKE_INSTALL_PREFIX}/install
)