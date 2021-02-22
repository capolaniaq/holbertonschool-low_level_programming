#include "holberton.h"

/**
* *_strchr - function that locates a character in a string
* @s: string
* @c: ocurrence character
* Return: Null if the character not found or string ocurrence
*/

char *_strchr(char *s, char c)
{
	int i, j;

	j = 0;

	while (*(s + j) != '\0')
		j++;

	for (i = 0; i <= j; i++, s++)
	{
		if (*s == c)
			return (s);
	}

	return (0);

}
