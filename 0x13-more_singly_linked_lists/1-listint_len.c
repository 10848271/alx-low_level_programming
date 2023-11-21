#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 * @h: head node of linked list
 *
 * Return: number of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
