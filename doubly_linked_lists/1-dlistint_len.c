#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - finds the length of a list
 * @h: pointer to first node in list
 * Return: length of list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while(h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
