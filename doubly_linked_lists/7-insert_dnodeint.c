#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to first node in list
 * @idx: point of insertion in list
 * @n: data given for new node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = temp;
		*h = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
