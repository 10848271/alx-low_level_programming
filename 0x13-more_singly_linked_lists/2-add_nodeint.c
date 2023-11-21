#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of linked list
 * @head: pointer to head node of linked list
 * @n: interger value of new node to be added
 *
 * Return: address of new element;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new  == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
