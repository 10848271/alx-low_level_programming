#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Always (0) success
 */
int main(void)
{
	int ascii;

	for (ascii = 97; ascii < 123; ascii++)
	{
		putchar(ascii);
	}
	putchar(10);

	return (0);
}
