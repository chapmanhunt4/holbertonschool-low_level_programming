#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to first node
 * @str: string inside of node
 * Return: address of new element or NULL if fail
 **/

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = string;
	new_node->next = *head;
	*head = new_node;
	free(new_node);
	return (string);
}
