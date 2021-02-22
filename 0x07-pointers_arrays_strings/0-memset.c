#include "holberton.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: pointer char where save and print the characters
* @b: char for the print in s
* @n: n bytes of the memory of the area pointed
* Return: pointer to be memory area s
*/


char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;


	return (s);
}
