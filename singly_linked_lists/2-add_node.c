#include "main.h"
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
	list_t *new_node = NULL;

	new_node = malloc(strlen(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = str;
	new_node->next = *head;
	*head = new_node;
}
