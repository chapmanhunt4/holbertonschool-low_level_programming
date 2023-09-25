#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: 0
 **/
int main(void)
{
	int n, c;

	for (n = '0'; n <= '9'; n++)
		for (c = '0'; c <= '9'; c++)
		{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		putchar(c + '0');
		}
	if (n != '9' || c != '9')
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

return (0);
}
