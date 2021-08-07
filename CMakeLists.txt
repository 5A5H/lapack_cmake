cmake_minimum_required(VERSION 3.0)
project(Lapack_PROJECT VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE 1)
find_package(LAPACK REQUIRED)

message("libs are  : ${LAPACK_LIBRARIES}")
message("flags are : ${LAPACK_LINKER_FLAGS}")

add_executable(lapack lapack.cpp )
target_include_directories(lapack SYSTEM PRIVATE ${PROJECT_SOURCE_DIR})
