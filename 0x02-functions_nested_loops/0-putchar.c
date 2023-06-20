#include "main.h"

/**
 * main - prints _putcahar to stdout
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char string[] = "_putchar";

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
