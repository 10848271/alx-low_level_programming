#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - finds node at specified index
 * @head: head pointer of list
 * @index: position of node to return
 *
 * Return: address of node at indexth position
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}

	return (node);
}
