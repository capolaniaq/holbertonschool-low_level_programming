#include "holberton.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates memory using malloc
* @b: unsigned int
* Return: pointer to a addres
*/

void *malloc_checked(unsigned int b)
{

	unsigned int *a;

	a = malloc(sizeof(int) * b);

	if (a == NULL || b == 0)
		exit(98);

	return (a);
}
