#include "main.h"

/**
 * times_table - table
 * Description: prints 9 times table starting with 0
 * Return: Nothing.
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar((i * j) + '0');

			if ((m / 10) == 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		}

		_putchar('\n');
	}
}
