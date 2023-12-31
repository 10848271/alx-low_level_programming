#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of the arguments passed
 * @argc: number of argument passed to the main program
 * @argv: pointer to strings(array of strings)
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
