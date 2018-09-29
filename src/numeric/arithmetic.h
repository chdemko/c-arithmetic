/**
 * @file src/numeric/arithmetic.h
 *
 * @author     Christophe Demko <chdemko@gmail.com>
 * @date       2017-2018
 * @copyright  BSD 3-Clause License
 *
 * This file is part of the c-test package <https://github.com/chdemko/c-test>
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
 * @note the Greatest Common Divisor of 0 and 0 is computed as 0
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

