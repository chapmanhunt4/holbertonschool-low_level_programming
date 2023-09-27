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
	char c = '0';
	int i;
	int n = 14;

	for (i = 0; i < 10 ; i++)
	{
		while (c <= 'n')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		c = '0';
		n = 14;
	}
}
