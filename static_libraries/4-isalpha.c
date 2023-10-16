#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: ascii variable to check
 *
 * Return: return a 0 upon proper execution
 **/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
