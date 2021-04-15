cmake_minimum_required(VERSION 3.17)
project(CppStudy)

set(CMAKE_CXX_STANDARD 14)

#add_executable(CppStudy main.cpp Student.h Student.cpp)
add_executable(CppStudy thread/WaitNotify.cpp thread/WaitNotify.h)