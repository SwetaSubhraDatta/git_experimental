cmake_minimum_required(VERSION 3.0.0)
project(git_experimental VERSION 0.1.0)

add_library(git_experimental git_experimental.cpp)
add_executable(git_experimental_exe main.cpp)
target_link_libraries(git_experimental_exe git_experimental)

