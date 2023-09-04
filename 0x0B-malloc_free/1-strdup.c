#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copy content of array into new array
 * @str: string to copy from
 *
 * Return: pointer of new array or NULL
 */
char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *ptr;
	
	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = malloc((size * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
