#include <stdio.h>

/**
* main - function de sum all the number below 1024 multiples 3 or 5
* void - no value into
* Return: always cero.
*/

int main(void)
{
	int i, j;

	j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}

	}

	printf("%d\n", j);
	return (0);

}
