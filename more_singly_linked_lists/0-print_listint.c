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
		size++;
		printf("%d\n", h->data);
		h = h->next;
	}
	return (size);
}
