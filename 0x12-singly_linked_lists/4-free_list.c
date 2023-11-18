#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head node of the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *trav;

	if (head == NULL)
		free(head);

	while (head)
	{
		trav = head->next;
		free(head->str);
		free(head);
		head = trav;
	}
}
