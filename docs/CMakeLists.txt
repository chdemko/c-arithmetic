find_program(DOXYGEN doxygen)
find_package(Sphinx)
if(SPHINX_EXECUTABLE AND DOXYGEN)
	add_custom_target(docs
		COMMAND
			${SPHINX_EXECUTABLE}
				-q
				-b html
				"${CMAKE_CURRENT_SOURCE_DIR}"
				"${CMAKE_CURRENT_BINARY_DIR}"
		COMMENT "Building HTML documentation with Sphinx."
	)

	add_custom_command(TARGET docs POST_BUILD
		COMMENT "HTML documentation is in ${CMAKE_CURRENT_BINARY_DIR}"
	)
endif()
