#include "holberton.h"

/**
* *leet -  function that encodes a string into 1337.
* @s: char for the encodes
* Return: s with the encodes for the a-4, e-3, o-0, t-7, l-1
*/

char *leet(char *s)
{

	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {52, 51, 48, 55, 49};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = num[j];
		}
	}

	return (s);

}
