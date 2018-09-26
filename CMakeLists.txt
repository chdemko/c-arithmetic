cmake_minimum_required(VERSION 2.8)

project(Arithmetic C)

enable_testing()
find_program(CMAKE_C_CPPCHECK NAMES cppcheck)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(docs)

if (CMAKE_C_CPPCHECK)
    list(
        APPEND CMAKE_C_CPPCHECK 
            "--language=c"
            "--std=c11"
            "--enable=all"
            "--inconclusive"
            "--force"
            "--suppressions-list=${CMAKE_SOURCE_DIR}/CppCheckSuppressions.txt"
            "--template='{file}:{line},{severity},{id},{message}'"
            "--error-exitcode=1"
    )
endif()
