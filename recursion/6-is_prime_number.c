#include "main.h"

/**
 * is_prime_number - returns a one if input is a prime number
 * @n: input integer to be determined if prime
 *
 * Return: one if number is prime otherwise zero
 **/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}

/**
 * find_prime - calculation for recursive statement
 * @x: base number
 * @y: divisor
 *
 * Return: returns one if prime zero if not
 **/

int find_prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (y % x == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(x, y + 1));
	}
