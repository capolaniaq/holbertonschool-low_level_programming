#include "holberton.h"

/**
* *cap_string - capitalice a string
* @s: inside
* Return: char with the capitalice
*/

char *cap_string(char *s)
{

	int a, b, c;

	a = 0;

	while (*(s + a) != '\0')
		a++;


	if (s[0] > 96 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}

	for (b = 0; b < a; b++)
	{
		c = b - 1;

		if (s[c] == 10 || s[c] == 32 || (s[c] == 34)
		|| s[c] == 33 || s[c] == '(' || s[c] == ')'
		|| s[c] == ';' || s[c] == '?' || s[c] == ','
		|| s[c] == '.' || s[c] == '{' || s[c] == '}'
		|| s[c] == 9)
			if (s[b] >= 97 && s[c] <= 122)
				s[b] = s[b] - 32;

	}
	return (s);

}
