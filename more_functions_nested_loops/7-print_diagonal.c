#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: a variable that determines how many segments the program will have
 *
 * Return: void
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n')
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
