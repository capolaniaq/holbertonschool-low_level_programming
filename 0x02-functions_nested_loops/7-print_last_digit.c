#include "holberton.h"
/**
 * print_last_digit - returns 1 is lowercase, 0 otherwise
 * @x: Input parameter in ASCII
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
		x = x * (-1);

	_putchar('0' + x);
	return (x);
}
