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
		if (ascii != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
