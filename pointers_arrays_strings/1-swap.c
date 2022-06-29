#include "main.h"

/**
 * swap_int -  swap the value of two integers
 * @a: integer
 * @b: integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
