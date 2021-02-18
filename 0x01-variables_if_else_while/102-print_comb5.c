#include <stdio.h>

/**
* main - the function multiples
*
* Return: allways zero
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i != j)
			{
				if (i < j)
				{
					putchar('0' + i / 10);
					putchar('0' + i % 10);
					putchar(32);
					putchar('0' + j / 10);
					putchar('0' + j % 10);
					if (i != 98 && j != 100)
					{
						putchar(44);
						putchar(32);
					}
				}

			}
		}
	}

	putchar(10);
	return (0);
}
