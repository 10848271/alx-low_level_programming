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
	unsigned long int idx, size = strlen(str);

	char *cpy = malloc(sizeof(char) * (size + ));

	if (str == NULL || cpy == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		cpy[idx] = str[idx];

	return (cpy);
}
