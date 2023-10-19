#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: 
 *
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr)
		return (ptr);
	exit(98);
}
