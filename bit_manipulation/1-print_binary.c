#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 **/

void print_binary(unsigned long int n)
{
	int i, k, size;

	size = sizeof(n) * 8;

	for (i = size - 1; i >= 0; i--)
	{
		k = n >> 1;
		if (k & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
