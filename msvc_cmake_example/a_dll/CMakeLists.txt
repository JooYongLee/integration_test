cmake_minimum_required(VERSION 3.11)

add_library(a_dll SHARED
	dllmain.cpp
	a_dll.cpp
)

message(STATUS CMAKE_BUILD_TYPE)                     # -- CMAKE_BUILD_TYPE
message(STATUS ${CMAKE_BUILD_TYPE})                  # -- Debug
message(STATUS "Configuration: ${CMAKE_BUILD_TYPE}") # -- Configuration: Debug
message(STATUS "yosi")
message(STATUS ${CMAKE_SOURCE_DIR})         # -- Root
message(STATUS ${CMAKE_CURRENT_SOURCE_DIR}) # -- Root
message(STATUS ${CMAKE_INSTALL_PREFIX}) # -- Root
message(STATUS "this a cmake")

target_include_directories(a_dll
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(MSVC)
	target_compile_definitions(a_dll
	PRIVATE
		ADLL_EXPORTS
	)

	elseif(${CMAKE_CXX_COMPILER_ID} MATCHES Clang)  # Clang + AppleClang
    # ...
elseif(${CMAKE_CXX_COMPILER_ID} MATCHES GNU)    # GNU C Compiler
    # ...
	target_compile_definitions(a_dll
	PRIVATE
		ADLL_EXPORTS
	)
	message(STATUS "this is a_dll------" ${CMAKE_CURRENT_SOURCE_DIR})  
endif()

install(DIRECTORY       ${CMAKE_SOURCE_DIR}/include
        DESTINATION     ${CMAKE_INSTALL_PREFIX}/install
)
# 빌드 결과물을 설치
install(TARGETS         a_dll  # add_library, add_executable에 사용했던 이름
        DESTINATION     ${CMAKE_INSTALL_PREFIX}/install
)