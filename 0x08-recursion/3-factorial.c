#include "holberton.h"

/**
* factorial -  the factorial of a given number.
* @n: integer
* Return: integer factorial of n
*/

int factorial(int n)
{
	int i;

	i = 1;

	if (n > 0)
	{
		i = i * n;

		return (i * (factorial(n - 1)));
	}
	else if (n == 0)
	{
		i = i * 1;
		return (i);
	}
	else
		return (-1);

}
