#include <stdio.h>

/**
 * print_most_numbers - Entry point
 *
 *Description - Prints 0 to 9, skips 2 and 4
 *
 * Return: void
 **/
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
	{
			putchar(n);
	}
	}
		putchar('\n');

}
