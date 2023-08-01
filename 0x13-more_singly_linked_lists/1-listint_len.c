#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - calculates lenght of a list
 * @h: pointer to head of a list
 *
 * Return: number of elements in a list
 *
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
