#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: argument amoung numbers
* @n:numbers of parameters
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arguments;

	va_start(arguments, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arguments, int));

			if (separator != 0 && i != (n - 1))
				printf("%s", separator);
		}
	}
	putchar(10);
	va_end(arguments);
}
