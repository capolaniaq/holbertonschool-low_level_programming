#include <stdio.h>

/**
* main - funcion firts 50 fibonacci
* void - no value into
* Return: always zero
*/

int main(void)
{
	int i;
	unsigned long int j, a, b;

	j = 0;
	a = 0;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		j = a + b;
		a = b;
		b = j;
		printf("%lu", j);
		if (i != 97)
			printf(", ");


	}

	printf("\n");
	return (0);

}
