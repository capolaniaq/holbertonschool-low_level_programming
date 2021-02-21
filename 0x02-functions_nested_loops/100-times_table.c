#include "holberton.h"

/**
 * print_times_table - returns 1 is lowercase, 0 otherwise
 * @n: no input paramether
 * Return: alwais 0;
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_times_table(int n)
{

	int a, i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0' + k);

			_putchar(32);
			if (k < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar('0' + k);
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(32);
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else if (k >= 100 && k < 1000)
			{
				a = k / 10;
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
				_putchar('0' + k % 10);
			}
			if (j != n)
				_putchar(44);
		}
		_putchar(10);
	}
}
