#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - prints content of a linked list
 * @h: head of the list to be printed
 *
 * Return: lenght of the list
 *
 */

size_t print_list(const list_t *h)
{
	int numOfElem = 0;
	list_t temp;

	if (!h)
	{
		return (numOfElem);
	}

	temp = *h;
	while (temp.next != NULL)
	{
		if (temp.str != NULL)
		{
			printf("[%d] %s\n", temp.len, temp.str);
			numOfElem++;
		}
		else
		{
			printf("[0] (nil)\n");
			numOfElem++;
		}

		temp = *(temp.next);
	}

	if (temp.str != NULL)
	{
		printf("[%d] %s\n", temp.len, temp.str);
		numOfElem++;
	}
	else
	{
		printf("[0] (nil)\n");
		numOfElem++;
	}
	return (numOfElem);
}
