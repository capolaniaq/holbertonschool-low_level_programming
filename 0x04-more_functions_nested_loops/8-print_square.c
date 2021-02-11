#include "holberton.h"

/**
 * print_square - returns 1 is lowercase, 0 otherwise
 * @size: input parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
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
			_putchar(35);
		}
	_putchar(10);
	}
}
