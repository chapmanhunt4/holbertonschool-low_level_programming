#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is returned
 *
 * Return: length of the string s
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
	}
}
