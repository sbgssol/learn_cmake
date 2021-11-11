project(static_lib_1)

add_library(${PROJECT_NAME} static_lib_1.cpp)
add_library(lib_1 ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/../all_include/)