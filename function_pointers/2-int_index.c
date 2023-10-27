#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer with cmp
 * @array: array to be checked
 * @size: size of the array
 * @cmp: function to compare integers
 *
 * Return: index of first match, or -1 if fail
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
		return (index);
	}
	return (-1);
}
