#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a mallocd list
 * @head: pointer to first node in list
 **/

void free_listint2(listint_t **head)
{
	listint_t *node_freer;

	while (*head != NULL)
	{
		if (*head == NULL)
		{
			free(*head);
		}
		else
		{
			node_freer = head;
			head = head->next;
			free(node_freer);
		}
	}
}
