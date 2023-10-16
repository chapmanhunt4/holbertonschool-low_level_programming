#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on sucess, 1 if error
 **/

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
