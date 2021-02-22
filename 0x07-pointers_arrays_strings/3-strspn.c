#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: stack memory
* @accept: stack memory
* Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int a;

	i = 0;

	j = 0;

	while (*(s + i) != '\0')
		i++;

	while (*(accept + j) != '\0')
		j++;

	a = j + 1;

	return (a);



}
