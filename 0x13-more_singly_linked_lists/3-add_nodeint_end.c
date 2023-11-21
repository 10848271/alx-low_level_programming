#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to end of linked list
 * @head: pointer to head node
 * @n: integer value of new node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *trav;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	trav = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = new;

	return (*head);
}
