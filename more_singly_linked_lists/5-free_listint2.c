#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a mallocd list
 * @head: pointer to first node in list
 **/

void free_listint2(listint_t **head)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (ptr != NULL)
			{
				new_node = ptr->next
				free(ptr);
				ptr = new_node;
			}
		}
		free(new_node);
	}
	free(*head);
}
