#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: pointer of array
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *a);
		else
			printf("%d, ", *a);
		a++;
		i++;
	}
	printf("\n");
}
