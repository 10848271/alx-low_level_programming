#include "main.h"
#include <string.h>

/**
 * puts_half - prints characters starting from half
 * @str: character array
 * Return: void
 */

void puts_half(char *str)
{

	int len = strlen(str);

	int len_2;

	if (len % 2 == 0)
		len_2 = strlen(str) / 2;
	else
		len_2 = strlen(str) / 2 + 1;

	str = &str[len_2];

	while (len_2 < len)
	{
		_putchar(*str);
		len_2++;
		str++;
	}
	_putchar('\n');
}
