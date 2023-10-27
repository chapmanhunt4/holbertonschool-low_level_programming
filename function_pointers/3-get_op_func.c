#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - points to function called by user
 * @operator: operator passed to program
 *
 * Return: a pointer to the function called
 **/

int (*get_op_func(char *operator))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[1].op, operator) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
