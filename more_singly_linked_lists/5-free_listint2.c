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

	new_node = NULL;

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	free(*head);
	ptr->next = new_node;
	free(new_node);
}
