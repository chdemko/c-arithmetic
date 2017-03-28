#include <stdlib.h>
#include <stdio.h>

#include "arithmetic.h"

int main(void)
{
	int a = 32;
	int b = 56;
	printf("%u\n", arithmetic_gcd(a, b));
	return EXIT_SUCCESS;
}
