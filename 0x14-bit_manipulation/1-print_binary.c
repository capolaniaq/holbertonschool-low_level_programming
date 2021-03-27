#include "holberton.h"
#include <stdio.h>

/**
* print_binary - function that prints the binary representation of a number
* @n: unsigned long int to convert to binary
*
* Return; void
*/

void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 1;
	unsigned long int x = 0;
	unsigned long int pot = 0;

	if (n == 0)
		_putchar(48);

	while (pot < n)
	{
		if (x == pot)
		{
			n = n - pot;
			x = 0;
			pot = 0;
			print_cero(i, j);
			i = j;
			j = 0;
		}
		pot = x;
		x = potencia2(pot);
		if (x > n)
		{
			n = n - pot;
			x = 0;
			pot = 0;
			print_cero(i, j);
			i = j;
			j = 0;
		}
		if (j == 0)
			_putchar(49);
		j++;
	}
	if (n == 0 && x == 0)
		print_cero(i, j);
}

/**
* potencia2 - function that return power to 2
* @i: number of the power
*
* Return: power of 2 int index i
*/

unsigned long int potencia2(unsigned long int i)
{
	if (i == 0)
		return (1);
	i = i * 2;

	return (i);
}

/**
* print_cero - function that print ceros for renable
* @i: position to compare
* @j: position to compare
*
* Return: void
*/

void print_cero(int i, int j)
{
	if (i == 0)
		return;
	j++;
	while (j < i)
	{
		j++;
		_putchar(48);
	}
}

