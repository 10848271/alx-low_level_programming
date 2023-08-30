#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: pointer to string to be used
 *
 * Return: lenght of @s
 */


int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		s++;
		len =  1 + _strlen_recursion(s);
	}
	else
	{
		return (0);
	}

	return (len);
}
