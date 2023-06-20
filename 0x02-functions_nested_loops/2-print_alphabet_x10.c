#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Return: noting
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
