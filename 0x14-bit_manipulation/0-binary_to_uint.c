#include "holberton.h"
#include <stdio.h>

/**
* binary_to_uint - fucntion that convert binario in decimal
* @b: string to convert
*
* Return: numbre decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int lenghttotal, num;
	unsigned int binary = 0;
	unsigned int i, pot, j = 0, k;

	if (b == 0)
		return (0);

	lenghttotal = strlentotal(b);

	if (lenghttotal == 0)
		return (0);

	i = lenghttotal - 1;

	for (k = 1; k <= lenghttotal; k++)
	{
		j++;
		num = b[i] - 48;
		if (num == 1)
		{
			pot = potencia(j);
			binary = binary + pot;
		}
		i--;
	}
	return (binary);
}

/**
* potencia - function that return power of 2 in index indicated
* @i: numbre of power
*
* Return: power of two
*/

int potencia(int i)
{
	int j;
	int potencia = 1;

	if (i == 0)
		return (1);
	for (j = 1; j < i; j++)
		potencia = potencia * 2;

	return (potencia);
}

/**
* strlentotal - function that return lenght of the string
* @b: string to analice
*
* Return: unsigned int indicated lenght
*/

unsigned int strlentotal(const char *b)
{
	unsigned int i = 0;
	unsigned int binary = 0;

	while (*(b + i) != '\0')
	{
		binary = b[i] - 48;
		if (!(binary == 0 || binary == 1))
			return (0);
		i++;
	}
	return (i);
}

