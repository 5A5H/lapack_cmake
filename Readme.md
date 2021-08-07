# LAPACK_CMake
An example project to use a LAPACK solver in C++.
CMake is used to cross platform use the LAPACK libraries instlled on the target system.

Tested now on MacOS and Ubuntu. It appears that LAPACK functions can be called from c++ using 
XXXXX_(). On MacOS, CMake will determine the default implementation which happens to contain a
preprocessor file as well.
