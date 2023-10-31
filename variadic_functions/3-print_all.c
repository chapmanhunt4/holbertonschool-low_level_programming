#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
	char f;
	char n;

	va_start(args, format);

	while (format && format[i])
	{
		f = format[i];
		n = format[i + 1];
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
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		if (n != '\0' && (f == 'c' || f == 'i' || f == 'f' || f == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
