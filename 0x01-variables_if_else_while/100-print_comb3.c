#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a, b;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		if (a != b)
		{
			if (i % 10 == 0)
			{
				a++;
			}
			else if (a >= b)
			{
				a++;
			}
			else
			{
				putchar('0' + a);
				putchar('0' + b);
					if (i != 89)
					{
						putchar(44);
						putchar(32);
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
