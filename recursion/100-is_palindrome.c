#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 *_strlen_recursion - Return the length of the string s
 * @b: variable
 * Return: 0
 */

int _strlen_recursion(char *b)
{
	if (!*b)
	{
		return (0);
	}
	return (_strlen_recursion(b + 1) + 1);
}

/**
 * is_palindrome - Checks if s is a palindrome
 * @a: variable
 * Return: 0
 */

int is_palindrome(char *a)
{
	int l;

	l = _strlen_recursion(a);
	if (l <= 1)
		return (1);
	return (helper_palindrome(a, l));
}

/**
 * helper_palindrome - Reverse string
 * @a: variable
 * @b: variable
 * Return: 0
 */

int helper_palindrome(char *a, int b)
{
	if (b <= 1)
		return (1);
	else if (*a == *(a + b - 1))
	{
		return (helper_palindrome(a + 1, b - 2));
	}
	else
		return (0);

}
