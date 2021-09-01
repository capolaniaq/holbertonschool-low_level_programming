#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searhc the argument with jump search
 * @array: pointer to firts argument of the array
 * @size: size_t type is the size of the array
 * @value: integer type is the argument to find
 *
 * Return: integer of index to find or -1 in case failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t root;
	size_t index;
	size_t idx_max;

	root = sqrt(size);

	for (index = 0; index <= size; index = index + root)
	{
		if (value <= array[index])
		{
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	idx_max = index;
	if (idx_max >= size)
	{
		idx_max = size - 1;
	}
	index = index - root;
	printf("Value found between indexes [%ld] and [%ld]\n",
		   index, index + root);
	for (; index <= idx_max; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}
