find_package(Sphinx)
if(SPHINX_EXECUTABLE)
	add_custom_target(docs
		COMMAND
			${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/src"
		COMMAND
			${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/docs"
		COMMAND
			${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/src" "${CMAKE_CURRENT_BINARY_DIR}/src"
		COMMAND
			${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/docs" "${CMAKE_CURRENT_BINARY_DIR}/docs"
		COMMAND
			${SPHINX_EXECUTABLE}
				-q
				-b html
				"${CMAKE_CURRENT_BINARY_DIR}/docs"
				"${CMAKE_BINARY_DIR}/html"
		COMMENT "Building HTML documentation with Sphinx."
	)

	add_custom_command(TARGET docs POST_BUILD
		COMMENT "HTML documentation is in ${CMAKE_BINARY_DIR}/html"
	)
endif()
