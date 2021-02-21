#include <stdio.h>

/**
* main - funcion firts 50 fibonacci
* void - no value into
* Return: always zero
*/

int main(void)
{
	int i, j;

	j = 0;

	for (i = 1; i <= 50; i++)
	{
		j = j + i;

		printf("%d", j);

		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);

}
