#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory occupied by the list_elements
 * @head: head pointer to list to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		free(head);
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
