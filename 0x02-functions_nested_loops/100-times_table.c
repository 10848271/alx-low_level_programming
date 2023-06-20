#include "main.h"
#include <stdio.h>
void _putchar_times(int);
int find_place(int);
void print_num(int, int);
/**
 * print_times_table - prints n times table
 * @n: number tables to prints
 *
 */
void print_times_table(int n)
{
	int i, j, num = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			print_num(num, j);
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

/**
 * _putchar_times - number of times to print putchar
 * @num: number to print
 */
void _putchar_times(int num)
{
	while (num != 0)
	{
		_putchar(' ');
		num--;
	}
}

/**
 * print_num - prints the digits
 * @n: number to print
 * @loop: loop state for space printing
 *
 */
void print_num(int n, int loop)
{
	int place, value = 1, space = 3;

	place = find_place(n);
	if (loop > 0)
		_putchar_times(space - place);
	if (place == 0)
	{
		_putchar('0' + n);
		return;
	}
	while (place != 0)
	{
		value *= 10;
		place--;
	}
	while (value > 1)
	{
		place = n / value;
		/*printf("\n**** %d lace: %d ***\n", n, place);*/
		_putchar('0' + place);
		n = n - (place * value);
		value /= 10;
	}
	_putchar('0' + n);
}

/**
 * find_place - finds the place value of a number
 * @n: number to work on
 *
 * Return: place value of n
 */
int find_place(int n)
{
	if (n < 10)
		return (0);
	else if (n > 9 && n < 100)
		return (1);
	return (2);
}
