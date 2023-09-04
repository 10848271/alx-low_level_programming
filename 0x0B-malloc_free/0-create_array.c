#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars and initialize to a character
 * @size: size of array to create
 * @c: character to initialize array with
 *
 * Return: a pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
