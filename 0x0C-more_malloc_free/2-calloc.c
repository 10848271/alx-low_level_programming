#include <stdlib.h>
#include "main.h"

/**
 * void calloc - allocates memory for an array
 * @nmemb: number of array members
 * @size: datatype size of members
 *
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = (void *)malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
