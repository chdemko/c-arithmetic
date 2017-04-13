cmake_minimum_required(VERSION 2.6)

add_executable(test-gcd test-gcd.c)
add_dependencies(test-gcd arithmetic)
target_link_libraries(test-gcd arithmetic)
add_test(test-gcd ./test-gcd)

