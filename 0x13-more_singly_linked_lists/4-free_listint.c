#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
