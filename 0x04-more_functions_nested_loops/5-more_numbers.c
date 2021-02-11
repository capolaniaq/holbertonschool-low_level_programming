#include "holberton.h"

/**
 * more_numbers - returns 1 is lowercase, 0 otherwise
 * void - don't have parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
			_putchar('0' + b / 10);
			}
		_putchar('0' + b % 10);
		}
	_putchar(10);
	}
}
