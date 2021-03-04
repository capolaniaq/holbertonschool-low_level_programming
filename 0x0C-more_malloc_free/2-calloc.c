#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	memset(p, 0, (nmemb * size));

	for (i = 0; i < size; i++)
	{
		*(p + i) = nmemb;

	}

	return (p);

}
