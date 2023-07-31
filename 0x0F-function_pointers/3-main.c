#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - creates out the whole operation
 * @argc: number of parameters
 * @argv: pointer to pointer of parameters
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*func)(int, int), a, b, result;

	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = (char *)argv[2];
	func = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = (*func)(a, b);
	printf("%d\n", result);

	return (0);
}
