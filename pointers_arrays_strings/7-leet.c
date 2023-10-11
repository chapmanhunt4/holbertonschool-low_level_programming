#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: return encoded string
 */

char *leet(char *str)
{
	int i;
	char leetMap[128] = {0};

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leetMap[(int)str[i]] != 0)
		{
			str[i] = leetMap[(int)str[i]];
		}
	}

	return (str);
}
