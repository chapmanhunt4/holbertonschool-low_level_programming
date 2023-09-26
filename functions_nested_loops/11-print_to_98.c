#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Where the program starts
 *
 * @n: ascii variable to check
 *
 * Return: return a 0 upon proper execution
 **/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(", ");
			n = (n + 1);
		}
			printf("98");
			printf("\n");
	}
	else
	{
		while (n != 98)
		{
			printf("%d", n);
			printf(", ");
			n = (n - 1);
		}
			printf("98");
			printf("\n");
	}
}
