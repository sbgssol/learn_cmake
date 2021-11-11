project(dynamic_lib_3)

add_library(${PROJECT_NAME} SHARED dynamic_lib_3.cpp)
add_library(lib_3 ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/../all_include)