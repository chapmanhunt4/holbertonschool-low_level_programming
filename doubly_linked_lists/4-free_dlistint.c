#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: pointer to first node in list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_freer;

	while (head != NULL)
	{
		node_freer = head;
		head = head->next;
		free(node_freer);
	}
}
