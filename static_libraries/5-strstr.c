#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string being searched for
 * @needle: the substring being searched for
 *
 * Return: pointer to begining of substring, or null if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	char *hptr;
	char *nptr;

	while (*haystack != '\0')
	{
		hptr = haystack;
		nptr = needle;

		while (*nptr != '\0' && *hptr == *nptr)
		{
			hptr++;
			nptr++;
		}

		if (*nptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
