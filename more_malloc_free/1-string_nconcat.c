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
	unsigned long int num;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n > (unsigned long int)strlen(s2))
		num = strlen(s2);
	else
		num = n;

	str = malloc(strlen(s1) + num + 1);

	if (str)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			str[i] = s1[i];
		}
		for (c = 0; c < num; c++)
		{
			str[i] = s2[c];
			i++;
		}
		return (str);
	}	
	else
	{
		return (0);
	}
}	
