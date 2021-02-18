#include <stdio.h>

/**
* main - Entry point
*
* Return: - allways cero
*/

int main(void)
{
	int i, j, a, b, c;

	for (i = 0; i < 1000; i++)
	{
		a = i / 100;

		j = i / 10;

		b = j % 10;

		c = i % 10;

			if (a != b && a != c && b != c)
			{
				if ((a < b && a < c) && b < c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (i != 789)
					{
					putchar(44);
					putchar(32);
					}
				}
				else
				{
					i++;
				}
			}
	}
	putchar(10);
	return (0);
}
