#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: an integer, representing the number of segments the line must have
 *
 * Return: void
 **/

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
