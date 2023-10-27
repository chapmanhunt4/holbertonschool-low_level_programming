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
	int num1;
	int num2;
	char *operator = NULL;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	*operator = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (&argv[2][0] == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}
	result = ((*get_op_func(argv[2]))num1, num2);

	printf("%d\n", result);
	return (0);
}
