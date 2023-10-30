#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any type
 * @format: list of types of arguments that determines what type
 * is printed
 **/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
