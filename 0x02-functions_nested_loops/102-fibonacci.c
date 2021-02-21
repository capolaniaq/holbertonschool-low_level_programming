#include <stdio.h>

/**
* main - funcion firts 50 fibonacci
* void - no value into
* Return: always zero
*/

int main(void)
{
	int i;
	long int j, a, b;

	j = 0;
	a = 0;
	b = 1;


	for (i = 0; i <= 49; i++)
	{
		j = a + b;
		a = b;
		b = j;

		printf("%ld", j);

		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);

}
