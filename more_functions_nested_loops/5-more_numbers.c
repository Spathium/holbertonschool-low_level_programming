#include "main.h"
#include <stdio.h>

/**
   * more_numbers - prints 10 times from 0 to 14
   * Return: Always 0
 */

void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar(i / 10 + '0');

			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
