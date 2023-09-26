#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to linked list
 * @index: nth position of element
 *
 * Return: element at nth index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	trav = head;

	while (trav)
	{
		if (count == index)
			return (trav);
		count++;
		trav = trav->next;
	}
	return (NULL);

}
