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
	unsigned long int ptr = *n;

	size = sizeof(n) * 8;

	if (index >= size)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (-1);
}
