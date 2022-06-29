#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: variable
 * Return: Always 0
 */

void print_triangle(int size)
{
	int a = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
