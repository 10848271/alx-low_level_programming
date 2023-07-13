#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value in array
 * @max: maximum integer value in array
 * Return: pointer to array created
 *	   NULL if it fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int idx, len;

	if (min > max)
		return (NULL);
	if (min < 0)
		min *= -1;
	if (max < 0)
		max *= -1;	
	len = max - min;
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	for (idx = 0; idx < len; idx++)
		ptr[idx] = min++;

	return (ptr);
}
