#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to be worked on
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = (-n);
	_putchar(48 + n);
	return (n);
}
