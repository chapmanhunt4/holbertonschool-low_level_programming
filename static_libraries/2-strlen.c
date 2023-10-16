#include "main.h"

/**
 * _strlen - Tells the  length of a string
 *
 * @s: a pointer to the string
 *
 * Return: The length of the string
 **/

int _strlen(char *s)

{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
