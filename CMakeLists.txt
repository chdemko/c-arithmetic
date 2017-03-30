cmake_minimum_required(VERSION 2.6)

project(Arithmetic C)

if(USE_COV)
	set(
		CMAKE_C_FLAGS
		"${CMAKE_C_FLAGS} --coverage"
	)
	set(
		CMAKE_EXE_LINKER_FLAGS
		"${CMAKE_EXE_LINKER_FLAGS} --coverage"
	)
	set(
		CMAKE_SHARED_LINKER_FLAGS
		"${CMAKE_SHARED_LINKER_FLAGS} --coverage"
	)
	set(
		CMAKE_STATIC_LINKER_FLAGS
		"${CMAKE_STATIC_LINKER_FLAGS} --coverage"
	)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
