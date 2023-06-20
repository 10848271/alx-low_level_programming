#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int multiple, num = 0, times = 0;

	while (num < 10)
	{
		while (times < 10)
		{
			multiple = num * times;
			if (multiple < 10)
			{
				_putchar(' ');
				_putchar(48 + multiple);
			}
			else
			{
				_putchar(48 + (multiple / 10));
				_putchar(48 + (multiple % 10));
			}
			if (times < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			times++;
		}
		_putchar('\n');
		num++;
		times = 0;
	}
}
