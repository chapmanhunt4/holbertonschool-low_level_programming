#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitolizes all the words of a string
 * @str: string to capitolize
 *
 * Return: returns capitolized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = toupper(str[0]);
		}
		if (str[i] == 9 ||
			str[i] == 10 ||
			str[i] == 32 ||
			str[i] == 44 ||
			str[i] == 46 ||
			str[i] == 59 ||
			str[i] == 33 ||
			str[i] == 34 ||
			str[i] == 40 ||
			str[i] == 41 ||
			str[i] == 63 ||
			str[i] == 123 ||
			str[i] == 125)
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		i++;
	}
	return (str);
}
