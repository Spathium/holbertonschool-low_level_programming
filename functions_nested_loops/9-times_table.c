#include "main.h"

/**
 * times_table - table
 * Description: prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, m, n;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			n = i * m;

			if ((n / 10) == 0)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
