#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints elements in a linked list
 * @h: head to linked list
 *
 * Return: number of elements in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
