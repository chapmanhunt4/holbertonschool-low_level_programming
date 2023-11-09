#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer to first element of list
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h)
		{
			printf("[%d] %d\n", h->len, h->data);
		}
		size++;
		h = h->next;
	}
	return (size);
}
