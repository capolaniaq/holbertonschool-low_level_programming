#include "holberton.h"

/**
* _strpbrk - function that gets the length of a prefix substring
* @s: stack memory
* @accept: stack memory
* Return: the number of bytes in the initial segment
*/

char *_strpbrk(char *s, char *accept)
{

	unsigned int i, j, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				a++;
		}
		if (a == 1)
		{
			s = s + i;
			return (s);
		}

	}


	return (0);



}
