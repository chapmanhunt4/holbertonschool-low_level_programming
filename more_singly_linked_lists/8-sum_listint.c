#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - returns the sum of all data in list
 * @head: pointer to first node in list
 * Return: sum of all data or zero
 **/

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int sum = 0;

	if (head == NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
