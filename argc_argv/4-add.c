#include "main.h"
#include <stdio.h>

/**
 * main - adds all positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if success, 1 if error
 **/

int main(int argc, char *argv[])
{
	if (*argv < 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (*argc = 0)
	{
		printf("0\n");
	}
	else
	{
		return (*argv[0] + add(*argv[0] + 1));
	}
}	
