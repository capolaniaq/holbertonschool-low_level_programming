#include "holberton.h"

/**
 * print_line - returns 1 is lowercase, 0 otherwise
 * @n: input parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar(95);
	}

	_putchar(10);
}
