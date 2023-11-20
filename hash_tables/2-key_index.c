#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - gives you the index of a key
 * @key: the key being searched for
 * @size: size of array of the hash table
 * Return: index at which the key/value pair should be stored
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
