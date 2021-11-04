# specify cmake version
cmake_minimum_required(VERSION 3.8)

# this must be specify before add_library to prevent warning
# about could not creating dynamic libraries
project(hello_dynamic_library)

# create dynamic library with SHARED option
add_library(lib_a SHARED module_a/lib_a.cpp)
target_include_directories(lib_a PRIVATE ${PROJECT_SOURCE_DIR}/module_a)

# create another one
add_library(lib_b SHARED module_b/lib_b.cpp)
target_include_directories(lib_b PRIVATE ${PROJECT_SOURCE_DIR}/module_b)

# create alias
add_library(dynamic_a ALIAS lib_a)
add_library(dynamic_b ALIAS lib_b)

# create executable with alias
add_executable(hello_dynamic main/main.cpp)
target_include_directories( hello_dynamic PUBLIC {$PROJECT_SOURCE_DIR})
target_link_libraries( hello_dynamic PRIVATE dynamic_a
                                               dynamic_b)