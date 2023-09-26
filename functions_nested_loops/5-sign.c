#include "main.h"

/**
 * print_sign - Entry point
 *
 * Return: return a 0 upon letter being uppercase, 1 if lowercase
 *
 * @n: number to be tested
 *
 * Description: prints out "_putchar"
 **/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
