#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - function that concatenates two strings.
* @s1: char to concat
* @s2: char to concat
* Return: two strings concats
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, length, l;

	char *p;

	i = 0;

	j = 0;

	l = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	p = malloc((i + j) * sizeof(char));


	for (length = 0; length < (i + j); length++)
	{
		if (length < i)
		{
			p[length] = *(s1 + length);
		}
		else
		{
			p[length] = *(s2 + l);

			l++;
		}
	}


	return (p);



}
