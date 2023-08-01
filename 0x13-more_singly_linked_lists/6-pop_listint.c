#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the element at the start
 * @head: pointer to the head pointer
 *
 * Return: value stored in popped element
 *
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *popped;

	if (*head == NULL)
		return (0);
	popped = *head;

	*head = popped->next;
	n = popped->n;
	free(popped);
	return (n);
}
