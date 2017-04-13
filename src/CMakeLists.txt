cmake_minimum_required(VERSION 3.0)

add_library(arithmetic SHARED arithmetic.c arithmetic.h)
add_library(arithmeticStatic STATIC arithmetic.c arithmetic.h)

set_target_properties (arithmetic
	PROPERTIES
		SOVERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
		VERSION ${PROJECT_VERSION}
)

set_target_properties (arithmeticStatic
	PROPERTIES
		OUTPUT_NAME arithmetic
)

install(
	TARGETS arithmetic arithmeticStatic
	LIBRARY DESTINATION lib COMPONENT "Library"
	ARCHIVE DESTINATION lib COMPONENT "Library"
	RUNTIME DESTINATION bin COMPONENT "Runtime"
)

install(
	FILES arithmetic.h
	DESTINATION include
	COMPONENT "Header"
)

find_package(Coverage)
if (BUILD_COVERAGE)
	add_custom_target(coverage
		${COVERAGE_EXECUTABLE}
			--directory ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/arithmetic.dir
			--capture
			--output-file ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/arithmetic.dir/coverage.info
			--quiet
		COMMENT "Building coverage info"
		VERBATIM
	)
	add_custom_command(TARGET coverage POST_BUILD
		COMMAND
			${COVERAGE_EXECUTABLE}
				--add-tracefile ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/arithmetic.dir/coverage.info
				--output-file ${CMAKE_BINARY_DIR}/coverage.info
				--quiet
	)
endif()


