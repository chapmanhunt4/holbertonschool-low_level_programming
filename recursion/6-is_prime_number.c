#include "main.h"

/**
 * is_prime_number - returns a one if input is a prime number
 * @n: input integer to be determined if prime
 *
 * Return: one if number is prime otherwise zero
 **/

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n / is_prime_number(n - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
