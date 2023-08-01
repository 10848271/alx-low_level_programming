#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees memory occupied by list elements
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
