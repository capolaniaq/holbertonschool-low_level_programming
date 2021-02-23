#include "holberton.h"

/**
* *_strstr - function that locates a substring
* @haystack: char inside
* @needle: mini string
* Return: int of the position needle
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, a, k;

	a = 0;

	j = 0;

	k = 0;

	while (*(needle + j) != '\0')
		j++;

	while (*(haystack + k) != '\0')
		k++;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[a])
			a++;
		else
			a = 0;

		if (j == a)
		{
			haystack = haystack + (k - j);
			return (haystack);
		}

	}

	return (0);

}
