# Run avec
# $ pip install --user cpp-coveralls
# $ cmake /path/to/source -DUSE_GCOV=1
# $ make
# $ make test
# $ coveralls --gcov gcov-5
# 
# ou
#
# $ cmake /path/to/source -DUSE_GCOV=1
# $ lcov --zerocounters  --directory .
# $ make test
# $ lcov --directory CMakeFiles/arithmetic.dir --capture --output-file my_prog.info
# $ genhtml --output-directory coverage   --demangle-cpp --num-spaces 2 --sort   --title "My Program's Test Coverage"   --function-coverage --branch-coverage --legend   my_prog.info


cmake_minimum_required(VERSION 2.6)


# Ajout d'un exécutable dépendant également de arithmetic.h
add_executable(test-gcd test-gcd.c)
# Précision de l'ordre de construction: le programme de test doit se faire
# après la librairie
add_dependencies(test-gcd arithmetic)
# Aggrégation du programme de test avec la librairie arithmetic
target_link_libraries(test-gcd arithmetic)

# Ajout d'un test
add_test(test-gcd ./test-gcd)

