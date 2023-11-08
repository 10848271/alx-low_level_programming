#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - finds the right operator function to use
 * @s: operator passed
 *
 * Return: pointer to operator function
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
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
