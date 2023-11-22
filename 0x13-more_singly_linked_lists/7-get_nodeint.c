#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at a given index
 * @head: head node of linked list
 * @index: nth node position to be returned
 *
 * Return: node at nth position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *trav;

	if (head == NULL)
		return (NULL);
	trav = head;

	while (trav != NULL)
	{
		if (idx == index)
			break;
		trav = trav->next;
		idx++;
	}

	return (trav);
}
