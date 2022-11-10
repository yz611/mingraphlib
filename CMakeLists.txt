cmake_minimum_required(VERSION 3.10)

# set the project name
project(MinGraphLib )

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message("CMAKE_BINARY_DIR :${CMAKE_BINARY_DIR}")
add_executable(MinGraphLib ${CMAKE_SOURCE_DIR})