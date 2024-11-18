/**
 * @module numeric/arithmetic
 *
 * @author     Christophe Demko <christophe.demko@univ-lr.fr>
 * @date       2011-2024
 * @copyright  BSD 3-Clause License
 */
#ifndef NUMERIC_ARITHMETIC_H_
#define NUMERIC_ARITHMETIC_H_

/**
 * arithmetic_gcd computes the Greatest Common Divisor of two positive integers.
 *
 * @param a first positive integer
 * @param b second positive integer
 *
 * @return the Greatest Common Divisor of a and b
 *
 * @note the Greatest Common Divisor of `0` and `0` is computed as `0`
 */
extern unsigned int arithmetic_gcd(unsigned int a, unsigned int b);

/**
 * arithmetic_lcm computes the Least Common Multiple of two positive integers.
 *
 * @param a first positive integer
 * @param b second positive integer
 *
 * @return the Least Common Multiple of a and b
 */
extern unsigned int arithmetic_lcm(unsigned int a, unsigned int b);

#endif  // NUMERIC_ARITHMETIC_H_
