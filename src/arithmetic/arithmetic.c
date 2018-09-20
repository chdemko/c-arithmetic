/**
 * @file arithmetic.c
 *
 * @author     Christophe Demko <chdemko@gmail.com>
 * @date       2017-2018
 * @copyright  BSD 3-Clause License
 *
 * This file is part of the c-test package <https://github.com/chdemko/c-test>
 */

#include "./arithmetic.h"

unsigned int arithmetic_gcd(unsigned int a, unsigned int b) {
  while (b) {
    unsigned int tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}

unsigned int arithmetic_lcm(unsigned int a, unsigned int b) {
  if (a && b) {
    return a * b / arithmetic_gcd(a, b);
  } else {
    return 0;
  }
}

