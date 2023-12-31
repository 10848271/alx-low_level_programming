#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to the head pointer of a list
 * @idx: position of insertion
 * @n: the element to be inserted
 *
 * Return: new list
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
