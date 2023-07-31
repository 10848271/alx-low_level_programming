#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/* Node definition */
/**
 * struct list_t - struct to define node structure
 * @str: string parameter
 * @len: lenght of string
 * @next: pointer to next node
 *
 */

typedef struct list_t
{
	char *str;
	int len;

	struct list_t *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void execute_first(void);
#endif
