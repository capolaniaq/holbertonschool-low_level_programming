#include "search_algos.h"



void print_array(int *array, size_t low, size_t size)
{

    size_t idx;

    if(low == size)
        return;

    printf("Searching in array: ");

    for(idx = low; idx < size; idx++)
    {
        printf("%d", array[idx]);
        if(idx != size -1)
            printf(", ");
        else
            printf("\n");
    }

}



int binarySearch(int *arr, size_t l, size_t r, int x)
{
    int mid;

    print_array(arr, l, r  + 1);
    if (r >= l) {
        mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}



int binary_search(int *array, size_t size, int value)
{
	int idx = 0;

	idx = binarySearch(array, 0, size -1, value);

	return (idx);
}