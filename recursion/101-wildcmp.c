#include "main.h"
/**
 * wildcmp - Compare two strings
 * @a: variable
 * @b: variable
 * Return: 0
 */
int wildcmp(char *a, char *b)
{
	if (!*a && !*b)
		return (1);
	if (*a == *b)
		return (wildcmp(a + 1, b + 1));
	if (*b == '*' && (wildcmp(a, b + 1) || wildcmp(a + 1, b)))
		return (1);
	if (*a == '*' && *(a + 1) && *b)
		return (0);
	return (0);
}
