#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;

	for (i = 48; i <= 57; i++)
	{

	putchar(i);

		if (i == 57)

		{

		break;

		}
		
	putchar(',');

	putchar('\t');


	}

	putchar('\n');

	return (0);
}
