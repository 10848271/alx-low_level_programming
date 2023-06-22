#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the \ character is to be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		j = i - 1;
		while (j)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
