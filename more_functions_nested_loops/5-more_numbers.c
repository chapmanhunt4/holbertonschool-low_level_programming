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
	char n = '0';

	for (n = '0'; n <= 10; n++)

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
