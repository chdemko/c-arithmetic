cmake_minimum_required(VERSION 3.0)

project(Arithmetic VERSION 0.0.1 LANGUAGES C)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(CMakeDependentOption)

find_package(HtmlCoverage)
if (BUILD_HTML_COVERAGE)
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
		COMMENT "Building html coverage"
		VERBATIM
	)
	add_custom_command(TARGET html-coverage POST_BUILD
		COMMENT "HTML coverage is in coverage/index.html"
	)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(docs)

