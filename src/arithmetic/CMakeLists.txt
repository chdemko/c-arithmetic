add_library(arithmetic SHARED arithmetic.c arithmetic.h)
add_library(arithmeticStatic STATIC arithmetic.c arithmetic.h)

set_target_properties (arithmetic
	PROPERTIES
		SOVERSION ${PROJECT_VERSION_MAJOR}
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
enable_coverage()

find_package(HtmlCoverage)
enable_html_coverage()

