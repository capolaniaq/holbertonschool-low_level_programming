#include "holberton.h"

/**
* *_strncat - append the string on the final the firts string
* @dest: string hello
* @src: string two "world"
* @n: the long of the string
* Return: Always dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	c = 0;

	a = 0;

	while (*(src + c) != '\0')
		c++;

	while (*(dest + a) != '\0')
		a++;

	if (n > c)
	{
		n = c;
	}

	for (b = 0; b <= ((a + n) - 1); b++)
	{
		if (b <= (a - 1))
		{
			dest[b] = dest[b];
		}
		else
		{
			dest[b] = src[b - a];
		}
	}

	return (dest);
}
