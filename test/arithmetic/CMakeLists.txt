include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(test-gcd test-gcd.c)
add_dependencies(test-gcd arithmetic)
target_link_libraries(test-gcd arithmetic)

find_package(Valgrind)

valgrind_test(test-gcd ./test-gcd)

