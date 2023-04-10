cmake_minimum_required(VERSION 3.20.0)
project(C++_learning)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXECUTABLE_NAME "main")
add_executable(${CMAKE_EXECUTABLE_NAME} main.cpp)

