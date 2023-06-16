#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Always (0) success
 */
int main(void)
{
	int lower, upper;

	/* alphabet lowercase printing */
	for (lower = 97; lower < 123; lower++)
	{
		putchar(lower);
	}

	/* alphabet uppercase printing */
	for (upper = 65; upper < 91; upper++)
	{
		putchar(upper);
	}
	putchar(10);

	return (0);
}
