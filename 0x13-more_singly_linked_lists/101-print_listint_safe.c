#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;

    while (head)
    {
        current = head;
        head = head->next;
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        /* If the next node points to a node that was already printed */
        if (current <= head)
        {
            printf("-> [%p] %d\n", (void *)head, head->n);
            break;
        }
    }

    return count;
}

