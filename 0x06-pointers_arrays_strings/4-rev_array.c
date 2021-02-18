#include "holberton.h"

/**
* reverse_array - print the array in reverse
* @a: array
* @n: long to the array
* Return: Allways zero
*/


void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = j;
	}



}
