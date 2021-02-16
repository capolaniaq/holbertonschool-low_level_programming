#include "holberton.h"

/**
* _puts - reset of the n a 98
* @str: char of the before function
*
* Return: always 0
*/

void _puts(char *str)
{
	int a;

	for (a = 0; (*(str + a)) != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
