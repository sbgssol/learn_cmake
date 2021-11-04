cmake_minimum_required(VERSION 3.8)

project(hello_header)

set(SOURCES
    src/math.cpp
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/inc
)
