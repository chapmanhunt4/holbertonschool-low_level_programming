#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of two integers
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subracts two integers
 * @a: int to be subtracted from
 * @b: int subtracting from
 *
 * Return: value of b subtracted from a
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: number to be multiplied
 * @b: multiplier
 *
 * Return: multiplied value
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: divisor
 * @b: number to be divided by
 *
 * Return: a divided by b
 **/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulos of two ints
 * @a: first int
 * @b: second int
 *
 * Return: modulos of two ints
 **/

int op_mod(int a, int b)
{
	return (a % b);
}
