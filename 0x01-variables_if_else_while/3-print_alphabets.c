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
	int i, b;

	for (i = 'a'; i <= 'z'; i++)
	{

	putchar(i);

	}

	for (b = 'A'; b <= 'Z'; b++)
	{

	putchar(b);

	}

	putchar('\n');

	return (0);
}
