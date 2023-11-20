#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key associated with the value
 * Return: the value associated with the key, or null
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !key)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
