#include <stdlib.h>

/**
 * char *create_array - creates an array of characters
 * @size: size of array to be created
 * @c: character to be used
 *
 * Return: a pointer to memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	unsigned int idx;

	if (ptr == NULL || size == 0)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		ptr[idx] = c;

	return (ptr);
}
