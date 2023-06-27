#include "main.h"
#include <string.h>
/**
 * puts2 - prints characters in even sequence
 * @str: pointer to hold character array
 * Return: void
 */


void puts2(char *str)
{
	int len = strlen(str);

	int i = 0;

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}

		str++;
		i++;
	}

	_putchar('\n');
}
