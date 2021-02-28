#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of the file
* @argc: number for the caracther argv
* @argv: character for the print
* Return: Always 0
*/


int main(int argc, char *argv[])
{
	int a, b;

	b = 1;

	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			a = atoi(argv[count]);

			b = b * a;
		}

		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
