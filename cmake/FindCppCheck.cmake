find_program(CMAKE_C_CPPCHECK NAMES cppcheck)
function(enable_cppcheck)
	if(CMAKE_C_CPPCHECK)
        list(
            APPEND CMAKE_C_CPPCHECK 
                "--enable=warning"
                "--inconclusive"
                "--force" 
                "--inline-suppr"
                "--suppressions-list=${CMAKE_SOURCE_DIR}/CppCheckSuppressions.txt"
        )
    endif()
endfunction(enable_cppcheck)

