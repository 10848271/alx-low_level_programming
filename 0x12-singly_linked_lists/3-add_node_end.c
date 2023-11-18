#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: head node of the linked list
 * @str: string value of new node
 *
 * Return: head of new linked list
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len1 = 0;
	char *str1;
	list_t *trav, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (; str[len1]; len1++)
		continue;
	str1 = strdup(str);
	new->str = str1;
	new->len = len1;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = new;

	return (*head);
}
