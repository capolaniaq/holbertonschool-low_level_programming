#include "holberton.h"

/**
* _puts - reset of the n a 98
* @str: char of the before function
*
* Return: always 0
*/

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
