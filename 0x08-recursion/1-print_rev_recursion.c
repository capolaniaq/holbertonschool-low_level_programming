#include "holberton.h"

/**
* _print_rev_recursion -  prints a string, followed by a new line
* @s: char the inside
* Return: void
*/

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
	_putchar(*s);

}
