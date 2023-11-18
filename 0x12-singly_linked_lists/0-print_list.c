#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints a linked list
 * @h: head node of linked list
 *
 * Return: number of nodes in linked lists
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *trav;

	if (h == NULL)
		return (len);
	trav = h;
	while (trav != NULL)
	{
		if (trav->str != NULL)
			printf("[%d] %s\n", trav->len, trav->str);
		else
			printf("[0] (nil)\n");
		len++;
		trav = trav->next;
	}

	return (len);
}
