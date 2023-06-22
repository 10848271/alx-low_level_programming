#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
