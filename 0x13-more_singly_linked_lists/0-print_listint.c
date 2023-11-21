#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: head node of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
