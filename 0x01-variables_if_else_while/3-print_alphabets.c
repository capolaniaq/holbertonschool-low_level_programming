#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (i = 'A'; i <= 'Z'; i++)
	{

	x = tolower(i);

	putchar(x);

	putchar(i);

	}

	putchar('\n');

	return (0);
}
