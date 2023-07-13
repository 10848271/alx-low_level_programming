#include <stdlib.h>

/**
 * calloc - allocates memory for an array
 * @nmemb: number of array member
 * @size: size of each member
 * Return: pointer to allocated array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return NULL;
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	for (idx = 0; idx < size * nmemb; idx++)
		ptr[idx] = 0;

	return (ptr);
}
