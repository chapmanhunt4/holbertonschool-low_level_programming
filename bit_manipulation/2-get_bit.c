#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - returns value of a bit at index
 * @n: bit given
 * @index: place at which bit is retrieved
 * Return: value of bit at index
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, size;

	size = sizeof(n) * 8;

	if (index == 0)
	{
		return ((n >> 0) & 1);
	}

	for (i = size - 1; i > 0; i--)
	{
		if (i == index)
		{
			return ((n >> i) & 1);
		}
	}
	return (-1);
}
