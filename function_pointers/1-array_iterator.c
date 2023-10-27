#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function on each element
 * of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to the function to be used
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

