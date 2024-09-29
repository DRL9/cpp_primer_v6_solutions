cmake_minimum_required(VERSION 3.21)
project(cpp_primer_v6_sol VERSION 0.1.0 LANGUAGES CXX)


include(CTest)
enable_testing()

add_executable(sol_02_01 src/c02/sol_01/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_CXX_COMPILE "g++")
set(CMAKE_CXX_FLAGS " -Wall -std=c++11")

include(CPack)
