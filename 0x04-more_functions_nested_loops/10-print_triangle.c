#include "main.h"

/**
 * print_triangle - prints triangle on screen
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int height = 0, breath, count;

	while (height++ < size)
	{
		breath = size - height;
		while (breath-- > 0)
		{
			_putchar(' ');
		}
		count = height;
		while (count-- > 0)
		{
			_putchar('#');
		}
		if (height != size)
			_putchar('\n');
	}
	_putchar('\n');
}
