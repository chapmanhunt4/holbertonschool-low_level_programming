#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int s = 0;
	hash_node_t *temp = NULL;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					if (s > 0)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					s++;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
