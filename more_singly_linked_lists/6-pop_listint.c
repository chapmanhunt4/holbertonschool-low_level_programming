#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to first node in list
 * Return: head nodes data, or zero if empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp, *ptr;
	int data = 0;

	ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		temp = ptr;
		ptr = ptr->next;
	}
	free(temp);
	temp->n = data;
	return (data);
}
