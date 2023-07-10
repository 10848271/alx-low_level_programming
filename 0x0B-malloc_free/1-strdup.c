#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a copy of a string
 * @str: string to copy
 *
 * Return: pointer of copy of str
 */
char *_strdup(char *str)
{
	unsigned long int idx, size;

	char *cpy;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	cpy = malloc(sizeof(*str) * (size + 1));

	if (cpy == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		cpy[idx] = str[idx];

	return (cpy);
}
