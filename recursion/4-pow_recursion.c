#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be raised to the power of
 * @y: power to be raised to
 *
 * Return: x to the power of y
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(y * (y + 1)));
	}
}
