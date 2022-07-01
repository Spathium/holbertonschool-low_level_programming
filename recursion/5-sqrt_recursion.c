#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - Returns the value of square root of n
 * @n: variable
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - square root
 * @prev: variable
 * @root: variable
 * Return: 0
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
