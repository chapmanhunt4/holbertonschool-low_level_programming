#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be added from second string
 *
 * Return: pointer to combined string, or NULL
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned long int i;
	unsigned long int c;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	str = malloc(strlen(s1) + strlen(s2) + 1);

	if (str)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			str[i] = s1[i];
		}
		for (c = 0; c < strlen(s2); c++)
		{
			if (n >= &s2)
			{
				str[i] = s2[c];
				i++;
			}
			else
			{
				str[i] = s2[n];
				i++;
			}
		}
		return (str);
	else
	{
		return (0);
	}
}	
