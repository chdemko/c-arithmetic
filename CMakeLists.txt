cmake_minimum_required(VERSION 2.8)

project(Arithmetic C)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

enable_testing()

find_package(CppCheck)
enable_cppcheck()

find_package(CcLint)
enable_cclint()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(docs)

set(CPACK_GENERATOR "ZIP")
set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES "doxygen;.*/\\\\..*;~$;${CPACK_SOURCE_IGNORE_FILES}")
include(CPack)

