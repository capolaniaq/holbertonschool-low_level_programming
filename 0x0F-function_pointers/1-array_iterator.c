#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

/**
* array_iterator -  function given as a parameter on each element of an array.
* @array: pointer
* @size: unsigned int
* @action: pointer to function
*
* Return: void
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
