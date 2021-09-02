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

	if (!value)
		return (-1);
	if (array == NULL)
		return (-1);
	root = sqrt(size);

	for (index = 0; index <= size; index = index + root)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if ((value >= array[index] && value <= array[index + root]) ||
			(index + root >= size - 1))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				   index, index + root);
			for (; index < index + root; index++)
			{
				printf("Value checked array[%ld] = [%d]\n", index, array[index]);
				if (array[index] == value)
				{
					return (index);
				}
				if (index == size - 1)
					return (-1);
			}
			return (index);
		}
	}

	return (-1);
}
