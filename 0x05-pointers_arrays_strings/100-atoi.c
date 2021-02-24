#include "holberton.h"
#include <stdio.h>
/**
* _atoi - function change the string for a number
* @s: char inside
* Return: int
*/

int _atoi(char *s)
{
	int i, l, j, number, a, b, numberstring;

	a = 1;

	i = 0;

	l = 1;

	b = 0;

	unsigned int k = 0;

	while (*(s + i) != '\0')
		i++;

	for (j = i; j > 0; j--)
	{
		if (s[j - 1] >= 48 && s[j - 1] <= 57)
		{
			number = s[j - 1];
			number = number - 48;
			k = k + (number * l);
			l = l * 10;
			b = 1;
		}
		else if (s[j - 1] == 45)
		{
			a = a * (-1);
		}
		else if (b == 1)
		{
			break;
		}

	}

	numberstring = k * a;

	return (numberstring);

}

