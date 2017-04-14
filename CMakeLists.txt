cmake_minimum_required(VERSION 2.8)

project(Arithmetic C)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(CMakeDependentOption)

find_package(HtmlCoverage)
if(BUILD_HTML_COVERAGE)
	add_custom_target(html-coverage
		${HTML_COVERAGE_EXECUTABLE}
			--output-directory coverage
			--demangle-cpp
			--num-spaces 2
			--sort
			--title "${PROJECT_NAME} ${PROJECT_VERSION} Coverage"
			--function-coverage
			--branch-coverage
			--legend
			--quiet
			coverage.info
		DEPENDS coverage
		COMMENT "Building html coverage"
		VERBATIM
	)
	add_custom_command(TARGET html-coverage POST_BUILD
		COMMENT "HTML coverage is in ${CMAKE_BINARY_DIR}/coverage"
	)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(docs)

