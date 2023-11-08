#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - finds number of nodes in a list
 * @h: pointer to first element in linked list
 * Return: number of elements
 **/

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
