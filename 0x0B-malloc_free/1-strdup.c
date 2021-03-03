#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - function that returns a pointer to a
* newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer of the char to copy
* Return: pointer de new asignation
*/

char *_strdup(char *str)
{
	unsigned int i, j;

	i = 0;

	char *p;

	if (str == 0)
		return (0);


	while (str[i] != '\0')
		i++;


	p = malloc(i * sizeof(char));

	if (p == 0 || i == 0)
		return (0);


	for (j = 0; *(str + j) != '\0'; j++)
		*(p + j) = *(str + j);

	return (p);

}
