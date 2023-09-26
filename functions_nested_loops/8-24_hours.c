#include "main.h"

/**
 * jack_bauer - Program start
 *
 * Return: void
 **/

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 3)
	{
		while (b < 10)
		{
			while (c < 6)
			{
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d = (d + 1);
				}
			d = 0;
			c = (c + 1);
			}
		c = 0;
		b = (b + 1);
		if ((a == 2) && (b == 4))
		{
			a = 10;
			b = 10;
			c = 10;
			d = 10;
		}
		}
	b = 0;
	a = (a + 1);
	}
}
