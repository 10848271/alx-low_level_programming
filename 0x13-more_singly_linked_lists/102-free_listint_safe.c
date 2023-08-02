#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list (handles loops)
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next_node;
	size_t count = 0;
	
	while (current)
	{
		next_node = current->next;
		current->next = NULL;
		free(current);
		count++;
		if (current >= next_node)
		{
			*h = NULL;
			return (count);
		}
		current = next_node;
	}
	*h = NULL;
	return (count);
}
