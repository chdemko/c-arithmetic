/**
 * @author     Christophe Demko <christophe.demko@univ-lr.fr>
 * @date       2011-2024
 * @copyright  BSD 3-Clause License
 */

#include <stdio.h>
#include <stdlib.h>

#include "arithmetic.h"

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
    printf("%u\n", arithmetic_gcd(a, b));  // NOLINT build/include_what_you_use
  }
  return EXIT_SUCCESS;
}
