#include "main.h"

/**
 * jack_bauer - prints time from 00:00 to 23:59
 * Return: nothing
 */
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			if (h > 9)
			{
				_putchar(48 + (h / 10));
				_putchar(48 + (h % 10));
			}
			else
			{
				_putchar(48);
				_putchar(48 + h);
			}
			_putchar(':');
			if (m > 9)
			{
				_putchar(48 + (m / 10));
				_putchar(48 + (m % 10));
			}
			else
			{
				_putchar(48);
				_putchar(48 + m);
			}
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
