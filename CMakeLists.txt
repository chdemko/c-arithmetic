cmake_minimum_required(VERSION 2.8)

project(Arithmetic C)

enable_testing()

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_program(CMAKE_C_CPPCHECK NAMES cppcheck)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(docs)

