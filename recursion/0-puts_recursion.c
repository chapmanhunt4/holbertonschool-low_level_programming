#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to be printed
 *
 **/

void _puts_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s + 1);
	}
}
