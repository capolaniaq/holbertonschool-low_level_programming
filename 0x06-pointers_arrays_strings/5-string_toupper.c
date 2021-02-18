#include "holberton.h"

/**
* *string_toupper - string for the change a upper letter
* @s: strig for change upper
* Return: string upper
*/

char *string_toupper(char *s)
{
	int i, a;

	a = 0;

	while (*(s + a) != '\0')
		a++;


	for (i = 0; i <= a; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
