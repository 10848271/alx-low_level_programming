#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the start of the list
 * @head: pointer to the head pointer of list
 * @str: string to be copied
 *
 * Return: address of new list
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_data = malloc(sizeof(list_t));

	if (!new_data)
		return (NULL);
	new_data->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new_data->len = i;
	new_data->next = *head;
	*head = new_data;

	return (*head);
}
