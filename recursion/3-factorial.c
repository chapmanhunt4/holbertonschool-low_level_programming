#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be returned
 *
 * Return: the factorial of n, or -one if n < zero
 **/

int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
