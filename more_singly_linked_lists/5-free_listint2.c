#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a mallocd list
 * @head: pointer to first node in list
 **/

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		if (*head == NULL)
		{
			free(*head);
		}
		else
		{
			free(*head);
		}
	}
}
