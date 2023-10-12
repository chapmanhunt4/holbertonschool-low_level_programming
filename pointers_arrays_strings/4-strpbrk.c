#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: the bytes to be searched for
 *
 * Return: returns pointer to the first byte match or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *aptr = accept;

		while (*aptr != '\0')
		{
			if (*s == *aptr)
			{
				return (s);
			}
		aptr++;
		}
	s++;
	}
	return (NULL);
}
