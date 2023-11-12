#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string contsining binary code
 * Return: converted number or 0 if fail
 **/

unsigned int binary_to_uint(const char *b)
{
	int i;
	int length;
	unsigned int decimal = 0;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += base;
		}
		base = base * 2;
	}
	return (decimal);
}
