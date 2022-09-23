#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash map
 * @key: string to get index
 * @size: size of the hash map
 * 
 * Return: the index where the key/value pair is stored in the hash map
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);

	return (idx % size); /* to get the position in the hash map */
}
