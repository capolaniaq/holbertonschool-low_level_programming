#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - returns 1 is lowercase, 0 otherwise
 * @n : input paramether
 * Return: alwais 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int a;

	if (n == 98)
	{
	printf("%d", n);
	}
	else if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
			{
			printf("%d", a);
			}
			else
			{
			printf("%d, ", a);
			}
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
			{
			printf("%d", a);
			}
			else
			{
			printf("%d, ", a);
			}
		}
	}
	printf("\n");
}
