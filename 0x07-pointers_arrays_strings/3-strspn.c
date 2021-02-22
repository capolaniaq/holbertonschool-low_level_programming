#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: stack memory
* @accept: stack memory
* Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j, a;

	a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				a++;
		}

		if (i > a)
			break;
	}


	return (a);



}
