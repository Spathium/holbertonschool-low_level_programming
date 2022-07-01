#include "main.h"

/**
 * factorial - returns the factorial of a number 
 * @a: integer
 * Return: 0
 */

int factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a <= 1)
		return (1);
	return (a * factorial(a - 1));
}
