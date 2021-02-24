#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: char the inside
* Return: integer
*/

int _strlen_recursion(char *s)
{
	static int i;

	i = 0;

	if (*s == '\0')
	{
		return (i);
	}

	return (i + 1 + _strlen_recursion(s + 1));

}
