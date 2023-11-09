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
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (temp->n);
}
