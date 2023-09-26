#include <stdio.h>

/**
 * print_alphabet_x10 - entry point
 *
 * description - prints the alphabet
 *
 * Return: void
 **/

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10 ; i++)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		c = 'a';
	}
}
