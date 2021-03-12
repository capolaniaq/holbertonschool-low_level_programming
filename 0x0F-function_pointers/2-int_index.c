#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>


/**
* int_index - function that searches for an integer
* @array: integer
* @size: integer
* @cmp: pointer to function
*
* Return: integer about found the integer
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}

	return (-1);
}
