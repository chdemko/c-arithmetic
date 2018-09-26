/**
 * @file test-gcd.c
 *
 * @author     Christophe Demko <chdemko@gmail.com>
 * @date       2017-2018
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
  assert(arithmetic_lcm(32, 56) == 224);
  assert(arithmetic_lcm(101, 23) == 2323);
  assert(arithmetic_lcm(101, 0) == 0);
  assert(arithmetic_lcm(0, 101) == 0);
  return EXIT_SUCCESS;
}

