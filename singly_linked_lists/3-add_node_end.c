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
	list_t *new_node, *ptr;
	ptr = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		free(new_node);
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
