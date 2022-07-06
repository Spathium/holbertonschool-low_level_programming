#include "main.h"

/**
 * _islower - if is lowercase 1, else 0
 * @c: An input character
 * function uses _putchar function to print
 * alphabet lowercase 10 times
 * Return: 0
 */
int _islower(int c)
{
	char u;
	int lower = 0;

	for (u = 'a'; u <= 'z'; u++)
	{
		if (u == c)
			lower = 1;
	}

	return (lower);
}
