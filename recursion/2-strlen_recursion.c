#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @a: string
 * Return: 0
 */

int _strlen_recursion(char *a)
{
	if (*a)
		return (1 + _strlen_recursion(a + 1));
	return (0);
}
