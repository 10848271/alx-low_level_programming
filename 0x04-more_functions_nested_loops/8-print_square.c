#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the side of the square
 * Return: nothing
 */
void print_square(int size)
{
	int height = size, width = size;

	while (height-- > 0)
	{
		while (width-- > 0)
		{
			_putchar('#');
		}
		if (height != 0)
			_putchar('\n');
		width = size;
	}
	_putchar('\n');
}
