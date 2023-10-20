#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int num;

	if (nmemb >= 1 && size >= 1)
	{
		num = nmemb * size;
	}
	else
	{
		return (0);
	}

	ptr = malloc(num);

	if (ptr)
	{
		memset(ptr, 0, num);
		return (ptr);
	}
	else
	{
		return (0);
	}
}
