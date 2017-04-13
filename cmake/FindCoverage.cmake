find_program(COVERAGE_EXECUTABLE lcov)
mark_as_advanced(COVERAGE_EXECUTABLE)
cmake_dependent_option(BUILD_COVERAGE "Enabling coverage support" OFF "COVERAGE_EXECUTABLE" OFF)
mark_as_advanced(BUILD_COVERAGE)
if(BUILD_COVERAGE)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
	set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} --coverage")
endif()




