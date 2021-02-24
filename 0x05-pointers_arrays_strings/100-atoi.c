#include "holberton.h"

/**
* _atoi - function change the string for a number
* @s: char inside
* Return: int
*/

int _atoi(char *s)
{
	int i, l, j, number, k, b, numberstring;

	i = 0;

	l = 1;

	k = 0;

	b = 0;

	unsigned int a = 1;

	while (*(s + i) != '\0')
		i++;

	for (j = i -1; j < 0; j--)
	{
		if (s[j] >= 48 && s[j] <= 57)
		{
			number = s[j];
			number = number - 48;
			k = k + (number * l);
			l = l * 10;
			b = 0;
		}
		else if (s[j] == 45 && k > 0)
		{
			a = a * (- 1);
		}
		else if (b == 1)
		{
			break;
		}

	}

	numberstring = k * a;

	return (numberstring);

}

