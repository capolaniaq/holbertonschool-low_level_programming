#include "search_algos.h"

/**
 * linear_search - Function that found the value in
 * with the linear search
 * @array: integer type and is the data structure for to analice
 * @size: size_t type is the size of the array
 * @value: integer type and is the value to search
 *
 * Return: integer that means the index that found the value,
 * or -1 in case failure
 */

int linear_search(int *array, size_t size, int value)
{
	int idx;
	size_t idxsignal = 0;

	if (!value)
		return (-1);

	for (idx = 0; idxsignal < size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idxsignal++;
	}

	return (-1);

}