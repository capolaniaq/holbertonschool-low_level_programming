#include "holberton.h"

/**
 * print_triangle - returns 1 is lowercase, 0 otherwise
 * @size: input parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar(10);
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j > (size - i))
			{
				_putchar(35);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
