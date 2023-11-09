#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - finds length of a list
 * @h: pointer to first node in list
 * Return: number of elements in list
 **/

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
