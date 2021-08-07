cmake_minimum_required(VERSION 3.0)
project(Lapack_PROJECT VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
find_package(LAPACK REQUIRED)

add_executable(lapack lapack.cpp )
target_include_directories(lapack SYSTEM PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(lapack ${LAPACK_LIBRARIES})

# It is possbile to tell CMake to make use of a spectfict BLAS vendor.
# Blas is automatically searched for from find_package(LAPACK), as it provides
# the lower level numeric implementations used from LAPACK.
# This way one may, e.g., use the popular Intel MKL implementation. 
# A little bit of work need to be done, starting with set(BLA_VENDOR Intel10_64lp).
# A websearch for this command should lead to the right instructions, which can also be found on
# CMake's documentation of find_package(LAPACK) and find_package(BLAS).