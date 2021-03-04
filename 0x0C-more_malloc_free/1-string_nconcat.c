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
	char *null = "";
	unsigned int lenght1, count1, count2, lenght2;

	lenght1 = 0;
	count2 = 0;
	lenght2 = 0;
	if (s1 ==  NULL)
		s1 = null;
	else if (s2 == NULL)
		s2 = null;

	while (*(s1 + lenght1) != '\0')
		lenght1++;
	while (*(s2 + lenght2) != '\0')
		lenght2++;
	if (n >= lenght2)
		lenght2 = n;

	charconcat = malloc((lenght1 + lenght2 + 1) * sizeof(char));

	if (charconcat == NULL)
		return (0);

	for (count1 = 0; count1 < (lenght1 + n); count1++)
	{
		if (count1 < lenght1)
			*(charconcat + count1) = *(s1 + count1);
		else
		{
			*(charconcat + count1) = *(s2 + count2);
			count2++;
		}
	}
	return (charconcat);
}
