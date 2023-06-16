#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase in reverse
 * Return: Always (0) success
 */
int main(void)
{
	int ascii;

	for (ascii = 122; ascii > 96; ascii--)
	{
		putchar(ascii);
	}
	putchar(10);

	return (0);
}
