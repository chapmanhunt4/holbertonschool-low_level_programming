#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters passed
 *
 * Return: sum of parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	unsigned int i;
	int sum;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
