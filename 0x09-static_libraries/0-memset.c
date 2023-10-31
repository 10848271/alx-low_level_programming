#include <stdio.h>

/**
 * _memset - fills in the first n bytes
 * @s: pointer to array in called function
 * @b: value to fill in with
 * @n: number of times to fill @b in @s
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
