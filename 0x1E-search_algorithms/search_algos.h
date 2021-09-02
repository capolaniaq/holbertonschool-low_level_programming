#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**/
int linear_search(int *array, size_t size, int value);

/**/
int binary_search(int *array, size_t size, int value);

/**/
void print_array(int *array, size_t low, size_t size);

/**/
int binarySearch(int *arr, size_t l, size_t r, int x);

/**/
int jump_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);

#endif
