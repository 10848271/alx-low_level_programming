#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all data in linked list
 * @head: head node of linked list
 *
 * Return: sum of all data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav;

	if (head == NULL)
		return (sum);
	trav = head;
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}

	return (sum);
}
