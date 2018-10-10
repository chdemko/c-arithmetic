/**
 * @file src/numeric/gcd.c
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

int main(int argc, char** argv) {
  unsigned int a;
  unsigned int b;
  if (argc < 3) {
    fprintf(stderr, "Usage %s: a b\n", argv[0]);
  } else if (sscanf(argv[1], "%u", &a) != 1) {
    fprintf(stderr, "Usage %s: a b\n", argv[0]);
  } else if (sscanf(argv[2], "%u", &b) != 1) {
    fprintf(stderr, "Usage %s: a b\n", argv[0]);
  } else {
    printf("%u\n", arithmetic_gcd(a, b));
  }
  return EXIT_SUCCESS;
}

