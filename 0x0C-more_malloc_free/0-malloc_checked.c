#include <stdlib.h>

/**
 * malloc_checked - returns allocated memory
 * @b: byte size to allocate
 * Return: a pointer to allocated memory or
 * 	   exit with status 98 if allocation failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
