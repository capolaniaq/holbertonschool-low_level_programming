#include "holberton.h"

/**
* _strlen - reset of the n a 98
* @s: the number check
*
* Return: int = lenght of the string
*/

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;

	return (a);
}
