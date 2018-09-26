include_directories(${CMAKE_SOURCE_DIR}/src)

find_package(Valgrind)

file(GLOB testSRC RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
)

foreach(testFilename ${testSRC})
  string(REPLACE ".c" "" testName ${testFilename})
  add_executable(${testName} ${testFilename})
  add_dependencies(${testName} arithmetic)

  target_link_libraries(${testName} arithmetic)

  valgrind_test(${testName} ./${testName})
endforeach(testFilename ${testSRC})
