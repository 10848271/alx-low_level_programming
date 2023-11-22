#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a specific index
 * @head: pointer to head node of linked list
 * @idx: position to insert
 * @n: data of new node to insert
 *
 * Return: new linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *trav;

	if (head == NULL || *head == NULL)
		return (NULL);
	trav = *head;
	while (trav != NULL)
	{
		if (count == idx - 1 || idx == 0)
			break;
		trav = trav->next;
		count++;
	}
	if (trav == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;

		return (*head);
	}

	new->n = n;
	new->next = trav->next;
	trav->next = new;

	return (*head);
}
