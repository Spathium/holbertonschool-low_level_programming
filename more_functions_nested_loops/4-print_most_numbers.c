#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers exxcept 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			putchar(i);
	}
	putchar('\n');
}
