include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(test-gcd test-gcd.c)
add_dependencies(test-gcd arithmetic)
target_link_libraries(test-gcd arithmetic)

add_executable(test-lcm test-lcm.c)
add_dependencies(test-lcm arithmetic)
target_link_libraries(test-lcm arithmetic)

find_package(Valgrind)

valgrind_test(test-gcd ./test-gcd)
valgrind_test(test-lcm ./test-lcm)

