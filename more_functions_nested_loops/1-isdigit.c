#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: ascii variable to check
 *
 * Return: return a 1 upon proper execution, returns 0 otherwise
 **/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
