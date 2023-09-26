#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to linked list
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *trav = h;
	size_t print_count = 0;

	if (h == NULL)
		return (print_count);
	while (trav != NULL)
	{
		print_count++;
		printf("%d\n", trav->n);
		trav = trav->next;
	}

	return (print_count);
}
