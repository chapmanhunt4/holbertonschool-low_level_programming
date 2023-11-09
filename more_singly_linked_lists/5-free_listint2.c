#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a mallocd list
 * @head: pointer to first node in list
 **/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{

	}
	else
	{
		ptr = *head;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			free(ptr);
		}
		free(*head);
	}
	*head = NULL;
	free(*head);
}
