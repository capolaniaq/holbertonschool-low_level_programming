#include "holberton.h"
/**
 * _abs - returns 1 is lowercase, 0 otherwise
 * @r: Input parameter in ASCII
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * (-1);
	}
	else
	{
		r = r;
	}

	return (r);

}
