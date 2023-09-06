#include <stdio.h>
/**
 * main - prints the arguments passed to main
 * @argc: number of argument passed to the main program
 * @argv: pointer to strings(array of strings)
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
