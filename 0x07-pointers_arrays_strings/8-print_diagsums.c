#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two
* diagonals of a square matrix of integers
* @a: integer
* @size: size of the integer
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int b, c;

	int i;

	c = 0;

	b = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		c = c + a[i];
	for (i = size * (size - 1); i > 0; i -= (size - 1))
		b = b + a[i];


	printf("%d, %d\n", c, b);
}
