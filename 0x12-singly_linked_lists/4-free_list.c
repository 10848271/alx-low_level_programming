#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees elements of a linked list
 * @head: pointer to a linked list
 *
 */
void free_list(list_t *head)
{
	list_t *trav;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head)
	{
		trav = head->next;
		free(head->str);
		free(head);
		head = trav;
	}
}
