#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of linked list
 * @head: ointer to a pointer of linked list
 * @str: new element to add
 *
 * Return: pointer to new list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	unsigned int str_len;

	if (node == NULL)
		return (NULL);

	for (str_len = 0; str[str_len]; str_len++)
		continue;

	node->str = strdup(str);
	node->len = str_len;
	node->next = *head;
	*head = node;

	return (*head);
}
