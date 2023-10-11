#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: points to the memory area
 * @b: the constant byte
 * @n: the number of bytes
 *
 * Return: return a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
