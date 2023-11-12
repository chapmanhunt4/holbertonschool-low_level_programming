#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to first node
 * @index: point in list where node is deleted
 * Return: 1 on success, -1 on fail
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (i < index - 1)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
		i++;
	}
	ptr2 = ptr->next;
	if (ptr2->next != NULL)
	{
		ptr->next = ptr2->next;
	}
	else
	{
		ptr->next = NULL;
	}
	free(ptr2);
	return (1);
}
