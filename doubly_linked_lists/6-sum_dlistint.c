#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - finds the sum of data from all nodes in a list
 * @head: pointer to first node in list
 * Return: sum of all nodes
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
