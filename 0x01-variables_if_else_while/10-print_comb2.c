#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i, b;

	for (i = 48; i <= 57; i++)
	{


		for (b = 48; b <= 57; b++)
		{

		putchar(i);

		putchar(b);

		putchar(',');

		putchar('\t');

		}


	}

	putchar('\n');

	return (0);
}
