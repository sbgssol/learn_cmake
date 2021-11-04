# specify minum version of CMake
cmake_minimum_required(VERSION 3.8)

# create static library
add_library(lib_a STATIC module_a/lib_a.cpp)
# specify include directory for the "lib_a" library
target_include_directories(lib_a PRIVATE ${PROJECT_SOURCE_DIR/module_a})

# create another static library
add_library(lib_b STATIC module_b/lib_b.cpp)
# specify include directory for the "lib_b" library
target_include_directories(lib_b PRIVATE ${PROJECT_SOURCE_DIR/module_b})

# specify project name
project(two_lib)
# create executable file
add_executable(${PROJECT_NAME} main/main.cpp)

# link executable file with two static libraries above
target_link_libraries(${PROJECT_NAME} PUBLIC lib_a 
                                             lib_b)
