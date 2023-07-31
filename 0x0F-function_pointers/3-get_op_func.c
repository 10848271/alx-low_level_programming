#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets operation to be performed
 * @s: operator passed
 *
 * Return: pointer to operator
 *
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}

	return (ops[i].f);
}
