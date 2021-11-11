project(exe)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} lib_1 lib_2 lib_3)