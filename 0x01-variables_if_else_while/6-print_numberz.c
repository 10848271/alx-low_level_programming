#include <stdio.h>

/**
 * main - Prints numbers
 * Return: Always (0) success
 */
int main(void)
{
	int ascii;

	for (ascii = 48; ascii < 58; ascii++)
	{
		putchar(ascii);
	}
	putchar(10);

	return (0);
}
