#include "holberton.h"

/**
* *_strcat - append the string on the final the firts string
* @dest: string hello
* @src: string two "world"
* Return: Always dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b, c;

	a = 0;

	c = 0;

	while (*(src + c) != '\0')
		c++;


	while (*(dest + a) != '\0')
		a++;

	for (b = 0; b <= ((a + c) - 1); b++)
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
