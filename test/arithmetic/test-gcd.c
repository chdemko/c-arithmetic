/**
 * @file test-gcd.c
 *
 * @author     Christophe Demko <chdemko@gmail.com>
 * @data       2017-2018
 * @copyright  BSD 3-Clause License
 *
 * This file is part of the c-test package https://github.com/chdemko/c-test
 */

#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include <arithmetic/arithmetic.h>

int main(void) {
  assert(arithmetic_gcd(32, 56) == 8);
  assert(arithmetic_gcd(101, 23) == 1);
  assert(arithmetic_gcd(101, 0) == 101);
  assert(arithmetic_gcd(0, 101) == 101);
  assert(arithmetic_gcd(0, 0) == 0);
  return EXIT_SUCCESS;
}

