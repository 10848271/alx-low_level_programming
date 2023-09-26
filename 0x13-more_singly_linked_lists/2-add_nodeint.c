#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node to beginning of list
 * @head: pointer to the pointer of list head
 * @n: number to add at start of list
 *
 * Return: address of new list or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (head == NULL || node == NULL)
		return (NULL);
1
	node->next = *head;
	node->n = n;
	*head = node;

	return (*head);
}
