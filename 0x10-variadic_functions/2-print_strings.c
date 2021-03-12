#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: character for separator
* @n: number characters
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *string;

	va_list arguments;

	va_start(arguments, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(arguments, char*);
			if (string == 0)
				printf("(nil)");
			else
				printf("%s", string);

			if (separator != 0 && i != (n - 1))
				printf("%s", separator);
		}
	}
	putchar(10);
	va_end(arguments);
}


