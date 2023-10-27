#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - points to function called by user
 * @s: operator passed to program
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

	while (ops[i].op != NULL)
	{
		if (operator[0] == ops[i].op[0] || ops[i].op == NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
