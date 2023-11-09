#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees malloc of a list
 * @head: pointer to first element of list
 **/

void free_list(list_t *head)
{
	list_t *node_freer;

	while (head != NULL)
	{
		node_freer = head;
		head = head->next;
		if (node_freer->str)
		{
			free(node_freer->str);
		}
		free(node_freer);
	}
}
