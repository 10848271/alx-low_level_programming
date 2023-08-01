#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to head of list
 * @n: number to add
 *
 * Return: return new list head
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newnode;

	return (*head);
}
