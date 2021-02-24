#include "holberton.h"

/**
* _puts_recursion -  prints a string, followed by a new line
* @s: char the inside
* Return: void
*/

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
	{
		_putchar(10);
		return;
	}

	_puts_recursion(s + 1);

}
