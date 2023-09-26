#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the pointer of a linked list
 * @n: value to add at end of the list
 *
 * Return: address of new list or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav, *node = malloc(sizeof(listint_t));

	if (node == NULL || head == NULL)
		return (NULL);

	trav = *head;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = node;

	return (*head);
}
