#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: memory to reallocate
 * @old_size: size of pointer to be reallocated
 * @new_size: size of the reallocated memory
 * Return: the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *char_ptr;
	unsigned int idx;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_ptr = malloc(sizeof(char) * new_size);
		char_ptr = ptr;
		for (idx = 0; idx < old_size; idx++)
			new_ptr[idx] = char_ptr[idx];
		free(ptr);
		return (new_ptr);
	}

	return (ptr);
}
