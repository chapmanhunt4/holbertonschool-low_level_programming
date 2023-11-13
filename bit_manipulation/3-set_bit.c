#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: the bit
 * @index: point at which bit is accessed
 * Return: 1 if worked, -1 if fail
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, size;

	size = sizeof(n) * 8;

	if (index == 0)
	{
		n = '1';
		return (1);
	}

	for (i = size - 1; i > 0; i--)
	{
		if (i == index)
		{
			n = '1';
		}
		return (1);
	}
	return (-1);
