#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at specified index
 * @head: pointer to a pointer of a linked list
 * @idx: index to insert node
 * @n: element to insert at idx position
 *
 * Return: new list
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *node = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (head == NULL || *head == NULL || node == NULL)
		return (NULL);
	trav = *head;
	node->n = n;

	if (idx == 0)
	{
		node->next = trav;
		*head = node;
		return (*head);
	}
	while (trav)
	{
		if (count == idx - 1)
		{
			node->n = n;
			node->next = trav->next;
			trav->next = node;
			return (*head);
		}
		count++;
		trav = trav->next;
	}
	return (NULL);
}
