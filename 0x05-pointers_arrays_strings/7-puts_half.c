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

	c = a / 2;

	if (a % 2 == 1)
		c++;


	while (c < a) 
	{
		_putchar(str[c]);
		c++;
	}

	_putchar(10);

}
