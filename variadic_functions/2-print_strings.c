#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of strings passed
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (i > 0 && separator)
		{
			printf("%s", separator);
		}
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(args);
	printf("\n");
}
