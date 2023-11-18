#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: head of linked list
 * @str: string value of node to be added
 *
 * Return: a new linked list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str1;
	list_t *new;
	int str_len = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str1 = strdup(str);
	for (; str[str_len]; str_len++)
		continue;
	new->str = str1;
	new->next = *head;
	new->len = str_len;
	*head = new;

	return (*head);
}
