#include "holberton.h"

/**
* *_memcpy - function that copies memory area
* @dest: pointer where copies the bytes from memory area
* @src: pointer from copies bytes memory area
* @n: bytes from memory area
* Return: pointer dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
