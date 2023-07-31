#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node to end of list
 * @head: pointer to head pointer of list
 * @str: string value to be inserted
 *
 * Return: address of new list
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (*head);
}
