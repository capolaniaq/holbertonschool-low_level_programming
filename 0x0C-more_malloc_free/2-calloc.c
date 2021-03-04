#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - function that allocates memory for an array,
* @nmemb: number of the elements
* @size: number of the bytes
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = 0;

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = nmemb;

	}

	return (p);

}
