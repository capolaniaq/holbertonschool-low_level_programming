#include "functions_pointers.h"
#include <stdio.h>
/**
* print_name - function that print the number
* @name: char
* @f: void
* Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
