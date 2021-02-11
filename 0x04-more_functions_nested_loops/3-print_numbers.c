#include "holberton.h"

/**
 * print_numbers - returns 1 is lowercase, 0 otherwise
 * void - don't have parameters inside
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
