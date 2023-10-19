#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocated memory for 2D array of integers
 * @width: horizontal sizze of array
 * @height: vertical size of array
 *
 * Return: pointer to 2D array of ints, or NULL on fail
 **/

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int c;

	if (width <= 0 || height <=0)
	{
		return (0);
	}

	array = malloc(sizeof(int *) * width);

	if (array)
	{
		for (i = 0; i < width; i++)
		{
			array[i] = malloc(sizeof(int *) * height);

			if (array[i])
			{
				for (c = 0; c < height; c++)
				{
					array[i][c] = 0;
				}
			}
			else
			{
				for (; i >= 0; i--)
					free(array[i]);
				free(array);
				return (0);
			}
		}
		return (array);
	}
	else
	{
		free(array);
		return (0);
	}
}
