#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - gets the node at index
 * @head: pointer to first node in list
 * @index: point in list where node is returned
 * Return: the nth node, or NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
