cmake_minimum_required(VERSION 3.8)

project(cpp_standard)

# set(CMAKE_CXX_STANDARD 11) cause error due to make_unique is valid since c++14
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp)