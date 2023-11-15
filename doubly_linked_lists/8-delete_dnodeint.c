#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: pointer to first node in the list
 * @index: point to delete at
 * Return: 1 on success, -1 on fail
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	if (temp2->next != NULL)
	{
		temp->next = temp2->next;
		temp2->next->prev = temp;
	}
	else
		temp->next = NULL;
	free(temp);
	return (1);
}
