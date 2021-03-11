#ifndef _FUNCTION_
#define _FUNCTION_

#include <stdio.h>

/*print the characters*/
int _putchar(char c);

/* function that returns the sum of all its parameters.*/
int sum_them_all(const unsigned int n, ...);

/*function that prints numbers, followed by a new line.*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*function that prints strings, followed by a new line.*/
void print_strings(const char *separator, const unsigned int n, ...);

/*function that prints anything.*/
void print_all(const char * const format, ...);


#endif /*_VARIADIC_FUNCTIONS_H_*/
