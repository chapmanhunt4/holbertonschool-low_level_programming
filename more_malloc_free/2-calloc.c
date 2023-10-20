#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: number of bytes
 *
 * Return: pointer to allocated memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	unsigned int num;

	ptr = malloc(num);

	if (ptr)
	{
		return (ptr);
	}
	else
	{
		return (0);
	}
}
