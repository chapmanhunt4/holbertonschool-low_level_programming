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
	char *str = *b;
	int i;
	unsigned int lastDigit;
	unsigned int decimal = 0;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}

	i = strlen(b) - 1;
	while (i > 0)
	{
		lastDigit = str % 10;
		str = str / 10;
		decimal += lastDigit * base;
		base = base * 2;
	}
	return (decimal);
}
