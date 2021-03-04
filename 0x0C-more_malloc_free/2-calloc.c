#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_memset - fill memory with a constant byte
* @s: varible for the change
* @c: integer for the change
* @size: number of the bytes
* Return: pointer
*/

char *_memset(char *s, int c, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);

}


/**
* *_calloc - function that allocates memory for an array, using malloc
* @nmemb: number of the elements
* @size: number of the bytes
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	_memset(s, 0, (size * nmemb));

	return (s);
}
