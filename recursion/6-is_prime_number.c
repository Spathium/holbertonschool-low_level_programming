#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - Checks if a number is prime.
 * @a: variable
 * Return: 0
 */

int is_prime_number(int a)
{
	int div = 2;

	if (a <= 1)
		return (0);

	if (a <= 3)
		return (1);

	return (is_divisible(a, div));
}

/**
 * is_divisible - divisible
 * @nu: variable
 * @d: variable
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int nu, int d)
{
	if (nu % d == 0)
		return (0);

	if (d == nu / 2)
		return (1);

	return (is_divisible(nu, d + 1));
}
