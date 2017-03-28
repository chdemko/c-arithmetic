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
# $ lcov --directory src --capture --output-file my_prog.info
# $ genhtml --output-directory coverage   --demangle-cpp --num-spaces 2 --sort   --title "My Program's Test Coverage"   --function-coverage --branch-coverage --legend   my_prog.info

cmake_minimum_required(VERSION 2.6)

project(Arithmetic C)

if(USE_GCOV)
  message(STATUS "Enabling gcov support")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage")
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} --coverage")
  set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} --coverage")
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)

