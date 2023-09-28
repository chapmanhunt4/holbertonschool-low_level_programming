#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description - Prints a triangle
 *
 * @n: the integer that determines the dimensions of the triangle
 **/

void print_triangle(int n)
{
	int i;
	int j;
	int c;

	if (n <= 0)
		_putchar('\n');

	for (i = n ; i > 0 ; i--)
	{
		for (j = 1 ; j < i ; j++)
		{
			_putchar(' ');
		}
		for (c = i ; c <= n ; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
