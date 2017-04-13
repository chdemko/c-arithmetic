cmake_minimum_required(VERSION 2.6)

add_library(arithmetic SHARED arithmetic.c arithmetic.h)

install(
	TARGETS arithmetic
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin
)

install(
	FILES arithmetic.h
	DESTINATION include
)

