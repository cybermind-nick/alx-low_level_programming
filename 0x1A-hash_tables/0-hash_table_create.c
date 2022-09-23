#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: Pointer to the hash table instance
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
	{
		return NULL;
	}

	ht = malloc(sizeof(hash_table_t));
	ht->size = size;

	return (ht);
}
