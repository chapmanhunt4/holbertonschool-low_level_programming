#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to first node in list
 * @idx: position at which node is added
 * @n: data of node
 * Return: address of new node, or NULL
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	while (idx != 0)
	{
		if (i == idx)
		{
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}
	return (ptr);
}
