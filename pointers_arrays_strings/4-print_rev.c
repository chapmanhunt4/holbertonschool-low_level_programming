#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @str: a string to be printed in reverse
 **/

void print_rev(char *str)
{
	int c;
	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}

	i = n - 1;

	for (c = i ; c >= 0 ; c--)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
