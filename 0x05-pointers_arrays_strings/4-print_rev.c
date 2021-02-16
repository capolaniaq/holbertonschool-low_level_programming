#include "holberton.h"

/**
* _print_rev - reset of the n a 98
* @s: char of the before function
*
* Return: always 0
*/

void print_rev(char *s)
{
	
	int a = 0;

	int b;

	while (*(s + a) != '\0')
		a++;

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
