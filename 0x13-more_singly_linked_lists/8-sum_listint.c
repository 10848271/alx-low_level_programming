#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all elements in the list
 * @head: head pointer of list
 *
 * Return: sum of list elements
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
