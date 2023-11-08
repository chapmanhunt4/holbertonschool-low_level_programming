#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node at end of list
 * @head: pointer to first node in list
 * @str: string in list
 * Return: address of new node or NULL
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr, *temp;
	ptr = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next:
	}
	ptr->next = temp;
	temp = new_node;
	return (new_node);
}
