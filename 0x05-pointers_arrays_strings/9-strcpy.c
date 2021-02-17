#include "holberton.h"
#include <stdio.h>
/**
* *_strcpy - reset of the n a 98
* @dest: array inside for the before function
* @src: total the characters of the string
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int c, a;

	c = 0;

	while (*(src + c) != '\0')
		c++;



	for (a = 0; a <= c; a++)
	{
		dest[a] = src[a];
	}



	return (dest);

}
