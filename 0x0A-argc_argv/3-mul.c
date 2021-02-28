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
	int c;

	c = 0;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		c = 1;
	}

	return (c);
}
