#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == NULL) || (argv[2] != ops[1] && argv[2] != ops[2] && argv[2] != ops[3] && argv[2] != ops[4] && argv[2] != ops[5]))
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
