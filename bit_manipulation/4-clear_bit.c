#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * clear_bit - sets bit value to 0 at index
 * @n: the bitty
 * @index: point set to zero
 * Return: 1 on proper, -1 on fail
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8;

	if (index >= size)
	{
		return (-1);
	}

	*n = *n | (0 << index);

	return (1);
}
