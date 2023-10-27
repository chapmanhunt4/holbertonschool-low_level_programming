#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - calls function pointer to print name
 * @name: name to be printed
 * @f: function pointer
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
