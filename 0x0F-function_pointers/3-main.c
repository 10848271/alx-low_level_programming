#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - driver code that executes the calculations
 * @argc: count of arguments passed
 * @argv: pointer to string arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, result, (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = func(a, b);
	printf("%d\n", result);

	return (0);
}
