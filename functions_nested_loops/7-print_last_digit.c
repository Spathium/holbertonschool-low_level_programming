#include "main.h"

/**
*print_last_digit - Print last digit
*@r: variable
*Return: 0
*/

int print_last_digit(int r)
{

	r = (r % 10);

	if (r < 0)
	r = -r;
	_putchar (r = '0');
	return (r);
}
