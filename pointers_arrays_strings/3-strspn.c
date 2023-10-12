#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string being worked through
 * @accept: bytes to return
 *
 * Return: returns the number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int total = 0;

	while (*s != '\0')
	{
		char *aptr = accept;

		while (*aptr != '\0')
		{
			if (*s == *aptr)
			{
				total++;
			}
			aptr++;
		}
	if (*aptr == '\0')
	{
		return (total);
	}
	s++;
	}
	return (total);
}
