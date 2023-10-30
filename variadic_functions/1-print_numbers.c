#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of integers passed to function
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
