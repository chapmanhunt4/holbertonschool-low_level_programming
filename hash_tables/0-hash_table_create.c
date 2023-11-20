#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to new hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));

	if (!hash)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(hash->size * sizeof(hash_node_t *));
	if (!hash->array)
	{
		return (NULL);
	}
	for (i = 0; i < hash->size; i++)
	{
		hash->array[i] = NULL;
	}
	return (hash);
}
