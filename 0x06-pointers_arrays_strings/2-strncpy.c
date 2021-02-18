#include "holberton.h"

/**
* *_strncpy - append the string on the final the firts string
* @dest: string hello
* @src: string two "world"
* @n: the long of the string
* Return: Always dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	c = 0;

	a = 0;

	while (*(src + c) != '\0')
		c++;

	while (*(dest + a) != '\0')
		a++;


	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
