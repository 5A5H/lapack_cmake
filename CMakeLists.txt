cmake_minimum_required(VERSION 3.0)
project(Lapack_PROJECT VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
find_package(LAPACK REQUIRED)

add_executable(lapack lapack.cpp )
target_include_directories(lapack SYSTEM PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(lapack ${LAPACK_LIBRARIES})