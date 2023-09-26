#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all list data
 * @head: pointer of the linked list
 *
 * Return: sum of list data
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum = 0;

	if (head == NULL)
		return (sum);
	trav = head;

	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}

	return (sum);
}
