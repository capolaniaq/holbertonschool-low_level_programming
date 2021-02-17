#include "holberton.h"
#include <stdio.h>

/**
* print_array - reset of the n a 98
* @a: array inside for the before function
* @n: total the characters of the string
*
* Return: always 0
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c < n - 1)
		{
			putchar(44);
			putchar(32);

		}

	}



	putchar(10);

}
