#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers, using a binary search
 * @array: pointer to first element of array
 * @size: number of elemens in the array
 * @value: the desired value
 * Return: the index where value is located, or -1
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			if (i < end)
				printf(",");
			printf(" %d,", array[i]);
		}
		printf("\n");

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;

		else
			end = mid - 1;
	}
	return (-1);
}
