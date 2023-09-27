#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to end of linked list
 * @head: pointer to a pointer of a linked list
 * @str: element to add to a linked list
 *
 * Return: pointer to the new list
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *trav, *node = malloc(sizeof(list_t));
	unsigned int idx;

	if (node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (idx = 0; str[idx]; idx++)
		continue;
	node->len = idx;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = node;

	return (*head);
}
