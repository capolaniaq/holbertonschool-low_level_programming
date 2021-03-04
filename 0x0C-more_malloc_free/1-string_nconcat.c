#include "holberton.h"
#include <stdlib.h>


/**
* *string_nconcat - function that concatenates two strings
* @s1: the first char
* @s2: the second char
* @n: unsigned int for number of the characters of *s
* Return: pointer concat charconcat
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *charconcat;
	unsigned int i, j, k;

	i = 0;
	k = 0;
	if (s1 ==  NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;

	charconcat = malloc((i + n + 1) * sizeof(char));

	if (charconcat == NULL)
		return (0);

	for (j = 0; j < (i + n); j++)
	{
		if (j < i)
			*(charconcat + j) = *(s1 + j);
		else
		{
			*(charconcat + j) = *(s2 + k);
			k++;
		}
	}
	return (charconcat);
}
