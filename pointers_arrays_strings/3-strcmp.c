#include "main.h"

/**
 * _strcmp - function compare two strings
 * @a: variable
 * @b: variable
 * Return: 0
 */

int _strcmp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (*a - *b);
		a++, b++;
	}
	return (*a - *b);
}
