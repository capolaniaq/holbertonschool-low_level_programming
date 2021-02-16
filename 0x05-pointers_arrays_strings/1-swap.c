#include "holberton.h"

/**
* swap_int - change the values for the variables a and b
* @a: the number inside the before function
* @b: the number inside the before function
*
* Return: no return value
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;

}
