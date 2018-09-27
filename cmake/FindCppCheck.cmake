find_program(CMAKE_C_CPPCHECK NAMES cppcheck)
if(CMAKE_C_CPPCHECK)
    list(
        APPEND CMAKE_C_CPPCHECK 
            "--language=c"
            "--std=c11"
            "--enable=all"
            "--inconclusive"
            "--force"
            "--template='[{file}:{line}]: ({severity}) {id} {message}"
            "--suppressions-list=${CMAKE_SOURCE_DIR}/CppCheckSuppressions.txt"
            "--error-exitcode=1"
    )
endif(CMAKE_C_CPPCHECK)

