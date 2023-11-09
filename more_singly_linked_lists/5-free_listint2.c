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
	ptr = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = new_node;
		}
		free(new_node);
	}
}
