/**
 * @author     Christophe Demko <christophe.demko@univ-lr.fr>
 * @date       2011-2024
 * @copyright  BSD 3-Clause License
 */

#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>
#include <numeric/arithmetic.h>

int main(void) {
  assert(arithmetic_gcd(32, 56) == 8);
  assert(arithmetic_gcd(101, 23) == 1);
  assert(arithmetic_gcd(101, 0) == 101);
  assert(arithmetic_gcd(0, 101) == 101);
  assert(arithmetic_gcd(0, 0) == 0);
  return EXIT_SUCCESS;
}
