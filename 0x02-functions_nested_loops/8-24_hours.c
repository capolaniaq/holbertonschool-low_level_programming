#include "holberton.h"
/**
 * jack_bauer - returns 1 is lowercase, 0 otherwise
 * void: no input paramether
 *
 * Return: alwais 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(58);
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar (10);
		}
	}
}
