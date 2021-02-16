#include "holberton.h"

/**
* puts_half - reset of the n a 98
* @str: char of the before function
*
* Return: always 0
*/

void puts_half(char *str)
{
	int a = 0;

	int c, d;

	while (*(str + a) != '\0')
		a++;

	d = a -1;

	for (c = d / 2; c <= d; c++)
	{
		_putchar(str[c]);
	}

	_putchar(10);

}
