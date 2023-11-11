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
	listint_t *new_node;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	new_node = *head;
	while (new_node != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
}
