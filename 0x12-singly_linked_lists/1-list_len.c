#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *trav;

	if (h == NULL)
		return (len);
	trav = h;
	while (trav != NULL)
	{
		len++;
		trav = trav->next;
	}

	return (len);
}
