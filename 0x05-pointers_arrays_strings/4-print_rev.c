#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	char *str = s;
	int size = 0;

	while (*str != '\0')
	{
		str++;
		size++;
	}
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
