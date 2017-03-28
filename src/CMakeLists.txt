# Run avec
# $ pip install --user cpp-coveralls
# $ cmake /path/to/source -DUSE_GCOV=1
# $ make
# $ make test
# $ coveralls --gcov gcov-5
# 
# ou
#
# $ cmake /path/to/source -DUSE_GCOV=1
# $ lcov --zerocounters  --directory .
# $ make test
# $ lcov --directory CMakeFiles/arithmetic.dir --capture --output-file my_prog.info
# $ genhtml --output-directory coverage   --demangle-cpp --num-spaces 2 --sort   --title "My Program's Test Coverage"   --function-coverage --branch-coverage --legend   my_prog.info


cmake_minimum_required(VERSION 2.6)

add_executable(gcd-32-56 gcd-32-56.c arithmetic.c arithmetic.h)
add_library(arithmetic SHARED arithmetic.c arithmetic.h)

install(
	TARGETS arithmetic
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin
)

install(
	FILES arithmetic.h
	DESTINATION include
)

