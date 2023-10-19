#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string, or NULL
 **/

char *_strdup(char *str)
{
	char *strdup;
	int i = 0;

	if (!str)
	{
		return (0);
	}
	
	strdup = malloc(strlen(str) + 1);

	if (strdup)
	{
		for (; i <= strlen(str); i++)
		{
			strdup[i] = str[i];
		}
		return (strdup);
	}
	else
	{
		return (0);
	}
}
