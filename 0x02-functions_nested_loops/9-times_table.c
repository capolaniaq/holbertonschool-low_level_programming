#include "holberton.h"
/**
 * times_table - returns 1 is lowercase, 0 otherwise
 * void: no input paramether
 *
 * Return: alwais 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c < 10 && b == 9)
			{
			_putchar(32);
			_putchar('0' + c);
			}
			else if (c >= 10 && b == 9)
			{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			}
			else if (c < 10)
			{
			_putchar(32);
			_putchar('0' + c);
			_putchar(44);
			_putchar(32);
			}
			else
			{
			_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			_putchar(44);
			_putchar(32);
			}
		}
		_putchar(10);
	}
}
