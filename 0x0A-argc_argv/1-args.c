#include <stdio.h>
/**
 * main - prints the number of arguments passed to main
 * @argc: number of argument passed to the main program
 * @argv: pointer to strings(array of strings)
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", --argc);
	return (0);
}
