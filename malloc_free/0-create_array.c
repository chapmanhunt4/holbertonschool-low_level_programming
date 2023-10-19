#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, initialized with specific char
 * @size: size of array
 * @c: initializes array
 *
 * Return: pointer to the array, or NULL if zero or fail
 **/

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		char_array = malloc(size);
	}
	if (char_array)
	{
		for (i = 0; i < size; i++)
		{
			char_array[i] = c
		}
	}
	else
	{
		return (0);
	}
	return (char_array);
}
