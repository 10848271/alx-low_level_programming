#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e
 * Return: Always (0) success
 */
int main(void)
{
	int ascii;

	for (ascii = 97; ascii < 123; ascii++)
	{
		if (ascii != 101 && ascii != 113)
		{
			putchar(ascii);
		}
	}
	putchar(10);

	return (0);
}
