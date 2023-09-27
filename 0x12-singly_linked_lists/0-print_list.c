#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to a linked list
 *
 * Return: number of elements
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *trav;
	size_t print_count = 0;

	if (h == NULL)
		return (print_count);
	trav = h;
	while (trav)
	{
		if (trav->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", trav->len, trav->str);
		print_count++;
		trav = trav->next;
	}
	return (print_count);
}
