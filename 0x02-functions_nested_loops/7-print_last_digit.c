#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to be worked on
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = (-n);
	last = n % 10;
	_putchar(48 + last);
	return (last);
}
