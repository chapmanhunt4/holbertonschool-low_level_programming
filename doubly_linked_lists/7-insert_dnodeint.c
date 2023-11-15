#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to first node in list
 * @idx: point of insertion in list
 * @n: data given for new node
 * Return: address of new node or null if fail
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *temp2;
	unsigned int i = 0;

	temp2 = NULL;
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}
	temp = *h;
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
		temp2 = temp->next;
		temp->next = new_node;
		temp2->prev = new_node;
		new_node->next = temp2;
		new_node->prev = temp;
	}
	return (new_node);
}
