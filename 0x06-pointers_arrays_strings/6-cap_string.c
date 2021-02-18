#include "holberton.h"

/**
* *cap_string - capitallising the string
* @s: char for the capitalising
* Return: char whit the capitalized
*/

char *cap_string(char *s)
{
	int i, j;

	i = 0;

	while (*(s + i) != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (s[j] == '\n')
			s[j] = 10;
		else if (s[j] == '\t')
			s[j] = 32;
		else if (s[j] == ',')
			s[j] = 44;
		else if (s[j] == ';')
			s[j] = 59;
		else if (s[j] == '.')
			s[j] = 46;
		else if (s[j] == '!')
			s[j] = 33;
		else if (s[j] == '?')
			s[j] = 63;
		else if (s[j] == '"')
			s[j] = 34;
		else if (s[j] == '(')
			s[j] = 40;
		else if (s[j] == ')')
			s[j] = 41;
		else if (s[j] == '{')
			s[j] = 123;
		else if (s[j] == '}')
			s[j] = 125;
	}
	return (s);


}
