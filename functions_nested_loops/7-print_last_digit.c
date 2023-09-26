#include "main.h"

/**
 * print_last_digit - Where the program starts
 *
 * Return: return a upon proper execution
 *
 * @n: a number
 *
 * Description: prints last digit
 **/

int print_last_digit(int n)
{
	int a;

	if (n == -2147483647 - 1)
	{
		_putchar('8');
		return (8);
	}
	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;

	_putchar(a + '0');
	return (a);
}
