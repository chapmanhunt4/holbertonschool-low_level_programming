#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be capitolized
 *
 * Return: returns upper
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
