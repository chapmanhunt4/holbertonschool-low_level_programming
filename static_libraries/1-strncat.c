#include "main.h"

/**
 * _strncat - concatenates two strings using specified byte amount
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes
 *
 * Return: return dest value
 **/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest_start);
}
