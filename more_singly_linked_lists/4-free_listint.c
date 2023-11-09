#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees malloc of a list
 * @head: pointer to first node in the list
 **/

void free_listint(listint_t *head)
{
	listint_t *node_freer;

	while (head != NULL)
	{
		node_freer = head;
		head = head->next;
		free(node_freer);
	}
}
