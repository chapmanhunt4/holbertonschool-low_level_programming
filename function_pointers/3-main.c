#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: result of operation, or Error if fail
 **/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator = NULL;
	int (*calc_func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	calc_func = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (operator == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if (num2 <= 0))
	{
		printf("Error\n");
		exit (100);
	}
	result = calc_func(num1, num2);

	return (result);
}
