#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print the name of the file
* @argc: number for the caracther argv
* @argv: character for the print
* Return: Always 1
*/

int main(int argc, char **argv)
{
	int count, c, b, d, alpha;

	b = 0;

	c = 0;
	
	d = 5;

	alpha = 1;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; *(argv + count); count++)
		{
			
			if (*(*(argv + count)) >= 48 || *(*(argv + count)) <= 57)
			{
				alpha++;
			}
			else
			{
				alpha = 0;
				d = 0;
			}
		}
	}


	if (alpha == argc && d == 5)
	{
		for (count = 1; *(argv + count); count++)
		{
			b = b + atoi(argv[count]);
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
