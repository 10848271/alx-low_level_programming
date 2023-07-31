#include "function_pointers.h"

/**
 * int_index - returns index of a number in a array
 * @array: array to use
 * @size: size of array
 * @cmp: function to use for the search
 * Return:
 *	index of number in array
 *	-1 if no match or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (((*cmp)(array[i])) > 0)
				return (i);
		}
	}

	return (-1);
}
