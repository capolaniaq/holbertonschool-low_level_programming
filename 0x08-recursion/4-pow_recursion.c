#include "holberton.h"

/**
* _pow_recursion - the value of x raised to the power of y
* @x: integer
* @y: integer
* Return: integer power
*/

int _pow_recursion(int x, int y)
{
	int i;

	i = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = i * x;
		return (i * (_pow_recursion(x, y - 1)));
	}


	return (i);

}
