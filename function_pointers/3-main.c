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
 * Return: zero on success, or Error if fail
 **/

int main(int argc, char *argv[])
{
	int result;
	char operator;

	operator = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}

	result = (*get_op_func(operator))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
