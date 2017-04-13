find_program(HTML_COVERAGE_EXECUTABLE genhtml)
mark_as_advanced(HTML_COVERAGE_EXECUTABLE)
if (HTML_COVERAGE_EXECUTABLE)
	option(BUILD_HTML_COVERAGE "Generating HTML coverage")
	mark_as_advanced(BUILD_HTML_COVERAGE)
endif()




