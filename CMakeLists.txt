# $ cmake /path/to/source -DUSE_GCOV=1
# $ lcov --zerocounters  --directory src
# $ make test
# $ lcov --directory src --capture --output-file coverage.info
# $ coveralls-lcov --repo-token "YOUR TOKEN" coverage.info
# ou sur travis
# coveralls-lcov coverage.info
# $ genhtml --output-directory coverage   --demangle-cpp --num-spaces 2 --sort   --title "My Program's Test Coverage"   --function-coverage --branch-coverage --legend   coverage.info

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

