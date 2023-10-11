#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: memory area destination
 * @src: source memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *sptr = src;
	char *dptr = dest;

	for (i = 0; i < n; i++)
	{
		*dptr = *sptr
		dptr++;
		sptr++;
	}
	return (dest);
}
