#include "holberton.h"

/**
 * print_diagonal - returns 1 is lowercase, 0 otherwise
 * @n: input parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar(10);
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar(10);
			}
			else if (j < i)
			{
				_putchar(32);
			}
		}
	}
}
