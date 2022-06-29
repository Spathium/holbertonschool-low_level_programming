#include "main.h"

/**
 * print_square - prints a square,
 * @size: variable
 * Return: Always 0
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
