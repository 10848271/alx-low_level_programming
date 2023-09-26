#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse the elements in a list
 * @head: pointer to the head pointer
 *
 * Return: pointer to nead node
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	*head = (*head)->next;
	prev->next = NULL;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	(*head)->next = prev;

	return (*head);
}
