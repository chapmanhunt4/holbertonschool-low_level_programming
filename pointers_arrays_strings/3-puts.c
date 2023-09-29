#include "main.h"

/**
 * _puts - recreation of the standard puts function
 *
 * @str: a string to be printed
 **/

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
