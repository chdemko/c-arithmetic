#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include <numeric/arithmetic.h>

int main(void) {
  assert(arithmetic_lcm(32, 56) == 224);
  assert(arithmetic_lcm(101, 23) == 2323);
  assert(arithmetic_lcm(101, 0) == 0);
  assert(arithmetic_lcm(0, 101) == 0);
  return EXIT_SUCCESS;
}
