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
	int flag = 0;

	size = sizeof(n) * 8;

	if (n == 0)
	{
		printf("0\n");
		exit(0);
	}

	for (i = size - 1; i >= 0; i--)
	{
		k = n >> 1;
		if (k & 1)
		{
			flag = 1;
			printf("1");
		}
		else if (flag == 1)
		{
			printf("0");
		}
	}
}
