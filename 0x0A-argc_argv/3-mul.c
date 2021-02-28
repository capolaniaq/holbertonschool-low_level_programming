#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of the file
* @argc: number for the caracther argv
* @argv: character for the print
* Return: Always 1
*/


int main(int argc, char **argv)
{
	int a, b, c;

	b = 1;

	c = 0;

	int count;

	if (argc == 3)
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
		c = 1;
	}

	return (c);
}
