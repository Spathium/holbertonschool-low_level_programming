#include "main.h"

/**
 * _strcat - Concatenate strings
 * @a: variable
 * @b: variable
 * Return: 0
 */

char *_strcat(char *a, char *b)
{
	char *c = a;

	while (*a)
		a++;

	while (*b)
		*a++ = *b++;

	*a = '\0';
	return (c);
}
