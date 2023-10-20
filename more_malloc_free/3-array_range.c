#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers with a range
 * @min: lower numbers
 * @max: higher numbers
 *
 * Return: a pointer to the array, or NULL
 **/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (0);
	}
	
	arr = malloc(max - (min - 1) * sizeof(int *));

	if (arr)
	{
		for (i = 0; min <= max; i++)
		{
			arr[i] = min;
			min++;
		}
		return (arr);
	}
	else
	{
		return (0);
	}
}
