#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked list
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *trav;
	size_t len = 0;

	if (h == NULL)
		return (len);
	trav = h;
	while (trav)
	{
		len++;
		trav = trav->next;
	}
	return (len);
}
