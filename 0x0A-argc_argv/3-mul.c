#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two number arguments
 * @argc: number of argument passed to the main program
 * @argv: pointer to strings(array of strings)
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
