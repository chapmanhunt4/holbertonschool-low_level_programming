#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table to be updated
 * @key: the string used to represent the data in table
 * @value: the data associated with each key
 * Return: 1 on success, -1 on fail
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	char *node_key = strdup(key);
	char *node_val = strdup(value);
	hash_node_t *temp = NULL;

	if (!ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (!new_node)
		return (0);
	new_node->key = node_key;
	new_node->value = node_val;
	new_node->next = NULL;

	if (ht->array[i] == NULL)
	{
		ht->array[i] = new_node;
		return (1);
	}
	if (strcmp(key, ht->array[i]->key) == 0)
	{
		temp = ht->array[i];
		new_node->next = ht->array[i]->next;
		ht->array[i] = new_node;
		free(temp->key);
		free(temp->value);
		free(temp);
		return (1);
	}
	temp = ht->array[i];
	new_node->next = temp;
	ht->array[i] = new_node;
	return (1);
}
