#include "search_algos.h"
#include <math.h>


int jump_search(int *array, size_t size, int value)
{
	size_t root;
	size_t index;

	root = sqrt(size);


	for (index = 0; index < size; index = index + root)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value >= array[index] && value <= array[index + root])
		{
			printf("Value found between indexes [%d] and [%d]\n",
			array[index], array[index + root]);
			for (; index < index + root; index++)
			{
				printf("Value checked array[%ld] = [%d]\n", index, array[index]);
				if (array[index] == value)
				{
					return (index);
				}
			}
		}

	}
	return (-1);
}
