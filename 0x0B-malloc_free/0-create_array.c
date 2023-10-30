#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		arr[idx] = c;

	return (arr);
}
