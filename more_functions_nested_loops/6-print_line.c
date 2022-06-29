#include "main.h"

/**
 * print_line - draws a straight line
 * @n: variable
 * Return: Always 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			putchar('_');
	}
	putchar('\n');
}
