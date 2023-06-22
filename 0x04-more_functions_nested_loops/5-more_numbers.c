#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0, j = 0, quo = 0, rem = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			quo = j / 10;
			rem = j % 10;

			if (quo != 0)
				_putchar('0' + quo);
			_putchar('0' + rem);
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
