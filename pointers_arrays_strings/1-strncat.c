#include "main.h"

/**
 * _strncat - Concatenates strings.
 * @a: variable
 * @b: variable
 * @c: variable
 * Return: 0
 */

char *_strncat(char *a, char *b, int c)
{
	int d = 0, i = 0;
	char *e = a, *start = b;

	while (*b)
	{
		d++;
		b++;
	}

	while (*a)
		a++;

	if (c > d)
		c = d;

	b = start;

	for (; i < c; i++)
		*a++ = *b++;

	*a = '\0';
	return (e);
}
