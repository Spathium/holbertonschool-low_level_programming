#include "main.h"

/**
 * string_toupper - change lowercase letters of a string
 * @s: variable
 * Return: 0
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
