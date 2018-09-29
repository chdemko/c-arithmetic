/**
 * @file src/numeric/gcd-32-56.h
 *
 * @author     Christophe Demko <chdemko@gmail.com>
 * @date       2017-2018
 * @copyright  BSD 3-Clause License
 *
 * This file is part of the c-test package <https://github.com/chdemko/c-test>
 */

#include <stdio.h>
#include <stdlib.h>

#include "./arithmetic.h"

int main(void) {
  int a = 32;
  int b = 56;
  printf("%u\n", arithmetic_gcd(a, b));
  return EXIT_SUCCESS;
}

