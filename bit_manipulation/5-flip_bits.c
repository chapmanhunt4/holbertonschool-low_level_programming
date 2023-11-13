#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * flip_bits - flips a bit
 * @n: the first number
 * @m: the second number
 * Return: number of bits needed to flip to get from n to m
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size, flip;

	size = 0;
	flip = x ^ y;

	while (flip > 0)
	{
		if (flip & 1)
		{
			size++;
		}
		flip >>= 1;
	}
	return (size);
}
