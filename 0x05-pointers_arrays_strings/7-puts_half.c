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

	int c;

	while (*(str + a) != '\0')
		a++;

	for (c = (a - 1) / 2; c <= a ; c++)
	{
		_putchar(str[c + 1]);
	}

	_putchar(10);

}
