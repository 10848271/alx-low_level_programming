#include "main.h"

/**
 * _puts_recursion - prints a string to the stdout followed by newline
 * @s: a pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
