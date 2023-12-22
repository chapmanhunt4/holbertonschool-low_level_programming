#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers, linearlly
 * @array: pointer to first element in array
 * @size: number of elements in the array
 * @value: the desired value
 * Return: the index where value is located, or -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
