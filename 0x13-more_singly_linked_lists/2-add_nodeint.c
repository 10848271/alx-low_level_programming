#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node to begining of the list
 * @head: pointer to head pointer
 * @n: element to insert in list
 *
 * Return: pointer to new list
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (newnode);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
