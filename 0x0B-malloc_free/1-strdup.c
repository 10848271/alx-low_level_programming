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
	int size = 0, i = 0;
	char *ptr;
	
	while (str[i] != '\0')
	{
		i++;
		size++;
	}
	i = 0;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
