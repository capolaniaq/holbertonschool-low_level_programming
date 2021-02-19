#include "holberton.h"
#include <stdio.h>

/**
* lowercase - capitallising the string
* @s: char for the capitalising
* Return: char whit the capitalized
*/

int lowercase(int s)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";

	int  j, a;

	a = 0;

	for (j = 0; lower[j] != '\0'; j++)
	{
		if (s == lower[j])
			a = 1;
	}

	return (a);
}


/**
* separetor - caracteres to capitalice
* @s: integer responde
* Return: value a
*/

int separetor(int s)
{
	char separators[] = "' ''\t''\n',;.!?\"(){}";

	int a, j;

	a = 0;

	for (j = 0; separators[j] != '\0'; j++)
	{
		if (s == separators[j])
			a = 1;
	}

	return (a);
}

/**
* *cap_string - capitalice string
* @s: string for the value
* Return: value a
*/

char *cap_string(char *s)
{

	int i;

	if (lowercase(s[0] == 1))
		s[0] = s[0] - 32;

	for (i = 0; s[i] != '\0'; i++)
		if (separetor(s[i - 1]) == 1 && lowercase(s[i]) == 1)
			s[i] = s[i] - 32;

	return (s);

}
