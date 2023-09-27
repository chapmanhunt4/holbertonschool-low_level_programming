#include <stdio.h>

/**
 * more_numbers - entry point
 *
 * description - prints 0 to 14, 10 times
 *
 * Return: void
 **/

void more_numbers(void)
{
	int n = '0';
	int x = '0';

	for (x = '0'; x <= 9; x++)

		for (n = 0; n < 14; n++)
		{
			if (n > '9')
				{
				((n / 10) + '0');
				_putchar(n);
				}
			((n % 10) + '0');
			_putchar(n);
		}
}
