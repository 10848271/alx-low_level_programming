#include <stdio.h>

/**
 * main - Prints numbers
 * Return: Always (0) success
 */
int main(void)
{
	int ascii;

	for (ascii = 0; ascii < 16; ascii++)
	{
		if (ascii < 10)
		{
			putchar(ascii + 48);
		}
		else
		{
			putchar(97 + (ascii - 10));
		}
	}
	putchar(10);

	return (0);
}
