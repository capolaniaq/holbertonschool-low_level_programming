#include "holberton.h"

/**
* _power - variable to the count square root
* @n: integer for the square root
* @i: integer countable
* Return: integer
*/

int _power(int n, int i)
{
	int j;

	j = i * i;

	if (n == j)
		return (i);
	else if (n > j && n < (j + (2 * i)))
		return (-1);
	else if (n < 0)
		return (-1);

	return (_power(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: integer for the square root
* Return: integer
*/

int _sqrt_recursion(int n)
{
	return (_power(n, 0));
}
