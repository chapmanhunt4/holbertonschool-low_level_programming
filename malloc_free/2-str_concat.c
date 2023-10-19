#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to space in memory with combined strings, or NULL
 **/

char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned long int i;
	unsigned long int c;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	conc = malloc(strlen(s1) + strlen(s2) + 1);

	if (conc)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			conc[i] = s1[i]
		}
		for (c = 0; c < strlen(s2); c++)
		{
			conc[i] = s2[c];
			i++;
		}
		return (conc)
	}
	else
	{
		return (0);
	}
}
