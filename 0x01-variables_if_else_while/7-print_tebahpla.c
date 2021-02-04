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

	i = 122;

	while (i >= 97)
	{

	putchar(i);

	i = i - 1;

	}

	putchar('\n');

	return (0);
}
