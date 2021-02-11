#include "holberton.h"

/**
 * _isupper - returns 1 is lowercase, 0 otherwise
 * @c: Input parameter in ASCII
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
