#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: return a 0 upon letter being uppercase, 1 if lowercase
 *
 * @c: character to be tested
 *
 * Description: prints out "_putchar"
 **/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
						}
}
