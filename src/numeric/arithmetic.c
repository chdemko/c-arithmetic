/**
 * @author     Christophe Demko <christophe.demko@univ-lr.fr>
 * @date       2011-2024
 * @copyright  BSD 3-Clause License
 */

#include "../numeric/arithmetic.h"

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
