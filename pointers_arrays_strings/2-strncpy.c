#include "main.h"

/**
 * _strncpy - Copy string
 * @a: variable
 * @b: variable
 * @c: variable
 * Return: 0
 */

char *_strncpy(char *a, char *b, int c)
{
	int d = 0, i = 0;
	char *e = a, *start = b;

	while (*b)
	{
		d++;
		b++;
	}

	d++;

	if (c > d)
		c = d;

	b = start;

	for (; i < c; i++)
		*a++ = *b++;

	return (e);
}
