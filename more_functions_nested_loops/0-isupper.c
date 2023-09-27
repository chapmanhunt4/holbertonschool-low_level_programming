#include "main.h"

/**
* _isupper - Entry point
*
* Return: return a 1 upon c being uppercase, returns 0 otherwise
*
* @c: character to be tested
*
* Description: prints out "_putchar"
**/

int _isupper(int c)
{
	if (c > 32 && c < 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
