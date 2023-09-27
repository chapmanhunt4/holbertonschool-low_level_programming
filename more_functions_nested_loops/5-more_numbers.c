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
	int n;
	int x;

	for (x = 0; x <= 9; x++)
	{

		for (n = 0; n < 14; n++)
		{
			if (n > 9)
			{
				putchar((n / 10) + '0');
		}
		putchar((n % 10) + '0');
		putchar('\n')
		}
	}
}
