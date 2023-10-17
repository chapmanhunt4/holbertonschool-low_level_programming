#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point, adds positive positive numbers
 * @argc: argument count
 * @argv: array of argument names
 *
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
