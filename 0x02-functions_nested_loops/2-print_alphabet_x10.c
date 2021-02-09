#include "holberton.h"
/**
 * print_alphabet_x10 - entre point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);

		}
	_putchar(10);

	}

}

