#include <stdio.h>

/**
* main - funcion firts 50 fibonacci
* void - no value into
* Return: always zero
*/

int main(void)
{
	int i;
	long int j, a, b, k;

	j = 0;
	a = 0;
	b = 1;
	k = 0;

	for (i = 0; j <= 4000000; i++)
	{
		j = a + b;
		a = b;
		b = j;

		if (j % 2 == 0 && j != 4000000)
		{
			k = k + j;
		}


	}
	printf("%ld", k);
	printf("\n");
	return (0);

}
