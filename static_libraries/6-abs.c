#include "main.h"

/**
 * _abs - Where the program starts
 *
 * Return: return a 0 upon letter being uppercase, 1 if lowercase
 *
 * @n: number to be tested
 *
 * Description: prints absolute value
 **/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
