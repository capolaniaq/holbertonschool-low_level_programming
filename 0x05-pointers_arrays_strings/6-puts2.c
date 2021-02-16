#include "holberton.h"

/**
* puts2 - reset of the n a 98
* @str: char of the before function
*
* Return: always 0
*/

void puts2(char *str)
{
	int a = 0;

	int c;

	while (*(str + a) != '\0')
		a++;

	for (c = 0; c < a - 1; c = c + 2)
	{
		_putchar(str[c]);
	}

	_putchar(10);

}
