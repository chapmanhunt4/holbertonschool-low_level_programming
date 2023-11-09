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
	int data;

	if (*head == NULL)
	{
		return (0);
	}
		temp = *head;
		(*head) = (*head)->next;
		data = temp->n;
		return (data);
	free(temp);
}
