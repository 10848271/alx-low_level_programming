#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to be worked on
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int abs;

	if (n < 0)
	{
		abs = (-n) % 10;
		_putchar(48 + abs);
		return (abs);
	}
	_putchar(48 + (n % 10));
	return (n);
}
