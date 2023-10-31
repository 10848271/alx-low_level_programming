#include <stdio.h>
/**
 * main - prints its own name to the standard output
 * @argc: number of argument passed to the main program
 * @argv: pointer to strings(array of strings)
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
