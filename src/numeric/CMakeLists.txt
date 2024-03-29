set(CMAKE_INSTALL_RPATH_USE_LINK_PATH true)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

add_library(arithmetic SHARED arithmetic.c arithmetic.h)
add_library(arithmeticStatic STATIC arithmetic.c arithmetic.h)

set_target_properties(arithmeticStatic PROPERTIES OUTPUT_NAME arithmetic)

add_executable(gcd gcd.c)
add_dependencies(gcd arithmetic)
target_link_libraries(gcd arithmetic arithmeticStatic)

configure_file(
	${CMAKE_CURRENT_SOURCE_DIR}/numeric.pc.in
	${CMAKE_CURRENT_BINARY_DIR}/numeric.pc
	@ONLY
)
install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/numeric.pc
	DESTINATION share/pkgconfig
	COMPONENT "PkgConfig"
)

include(CMakePackageConfigHelpers)
configure_package_config_file(
	${CMAKE_CURRENT_SOURCE_DIR}/NumericConfig.cmake.in
	${CMAKE_CURRENT_BINARY_DIR}/NumericConfig.cmake
	INSTALL_DESTINATION cmake
)
install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/NumericConfig.cmake
	DESTINATION cmake
)

install(
	TARGETS arithmetic arithmeticStatic gcd
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

