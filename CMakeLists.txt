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

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(Coverage)
if (COVERAGE_EXECUTABLE AND BUILD_COVERAGE)
	add_custom_target(coverage
		${COVERAGE_EXECUTABLE}
			--base-directory "${CMAKE_CURRENT_SOURCE_DIR}"
			--directory src/CMakeFiles/arithmetic.dir
			--capture --output-file coverage.info
			--quiet
		COMMENT "Building coverage info"
		VERBATIM
	)
endif()

find_package(HtmlCoverage)
if (HTML_COVERAGE_EXECUTABLE AND BUILD_HTML_COVERAGE)
	add_custom_target(html-coverage
		${HTML_COVERAGE_EXECUTABLE}
			--output-directory coverage
			--demangle-cpp
			--num-spaces 2
			--sort
			--title "My Program's Test Coverage"
			--function-coverage
			--branch-coverage
			--legend
			--quiet
			coverage.info
		COMMENT "Building html coverage"
		VERBATIM
	)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)

