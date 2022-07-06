#include "main.h"

/**
 * _puts - prints a string
 * by a new line, to stdout.
 * @s: string
 * Return: 0
 */

void _puts(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
