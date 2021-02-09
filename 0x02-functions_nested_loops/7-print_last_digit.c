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

	if (x == 0)
		_putchar(48);
	else if (x == 1)
		_putchar(49);
	else if (x == 2)
		_putchar(50);
	else if (x == 3)
		_putchar(51);
	else if (x == 4)
		_putchar(52);
        else if (x == 5)
		_putchar(53);
	else if (x == 6)
		_putchar(54);
	else if (x == 7)
		_putchar(55);
	else if (x == 8)
		_putchar(56);
	else if (x == 9)
		_putchar(57);
	return (x);
}
