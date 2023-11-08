#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function passed as paramter
 * on each element of an array
 * @array: array to loop over
 * @size: length of array
 * @action: function pointer to execute on array elements
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
