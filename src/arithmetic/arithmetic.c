unsigned int arithmetic_gcd(unsigned int a, unsigned int b)
{
	while (b) {
		unsigned int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

