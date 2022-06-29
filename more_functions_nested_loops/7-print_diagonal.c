#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: variable
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				putchar(' ');
		putchar(92);
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
